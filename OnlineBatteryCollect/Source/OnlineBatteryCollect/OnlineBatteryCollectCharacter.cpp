// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "OnlineBatteryCollectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "Puckups/Pickup.h"
#include "Puckups/BatteryPickup.h"

//////////////////////////////////////////////////////////////////////////
// AOnlineBatteryCollectCharacter

AOnlineBatteryCollectCharacter::AOnlineBatteryCollectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Collection Sphere Radius default value
	CollectionSphereRadius = 200.f;

	// Create a collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(CollectionSphereRadius);

	//Set base values for character power
	InitialPower = 2000.f;
	CurrentPower = InitialPower;

	//Base values for controlling move speed
	BaseSpeed = 10.f;
	SpeedFactor = 0.75f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void AOnlineBatteryCollectCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AOnlineBatteryCollectCharacter, CollectionSphereRadius);
	DOREPLIFETIME(AOnlineBatteryCollectCharacter, InitialPower);
	DOREPLIFETIME(AOnlineBatteryCollectCharacter, CurrentPower);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AOnlineBatteryCollectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AOnlineBatteryCollectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AOnlineBatteryCollectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AOnlineBatteryCollectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AOnlineBatteryCollectCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AOnlineBatteryCollectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AOnlineBatteryCollectCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AOnlineBatteryCollectCharacter::OnResetVR);

	//handle collect button
	PlayerInputComponent->BindAction("CollectPickup", IE_Pressed, this, &AOnlineBatteryCollectCharacter::CollectPickups);
}

void AOnlineBatteryCollectCharacter::CollectPickups()
{
	// Ask server to collect a pickups in the vicinity
	ServerCollectPickups();
}

void AOnlineBatteryCollectCharacter::OnRep_CurrentPower()
{
	PowerChangeEffect();
}

bool AOnlineBatteryCollectCharacter::ServerCollectPickups_Validate()
{
	return true;
}
void AOnlineBatteryCollectCharacter::ServerCollectPickups_Implementation()
{
	if (Role == ROLE_Authority)
	{
		//Track the total power found in batteries
		float TotalPower = 0.f;

		// Get all overlapping actors and store it in the array
		TArray<AActor*> CollectedActors;
		CollectionSphere->GetOverlappingActors(CollectedActors);

		//Look at each actor in the collection sphere 
		for (auto CollectedActor : CollectedActors)
		{
			APickup* const TestPickup = Cast<APickup>(CollectedActor);
			// If it is a pickup and is valid and acttive
			if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
			{
				//Add power if we found a battery
				if (ABatteryPickup* const TestBattery = Cast<ABatteryPickup>(TestPickup))
				{
					TotalPower += TestBattery->GetPower();
				}
				//Collect the pickup and deactivate it
				TestPickup->PickedUpBy(this);
				TestPickup->SetActive(false);
			}
		}
	
		//Change the character's power based on what we have picked up
		if (!FMath::IsNearlyZero(TotalPower, 0.001f))
		{
			UpdatePower(TotalPower);
		}
	}
}


float AOnlineBatteryCollectCharacter::GetInitialPower()
{
	return InitialPower;
}

float AOnlineBatteryCollectCharacter::GetCurrentPower()
{
	return CurrentPower;
}

void AOnlineBatteryCollectCharacter::UpdatePower(float DeltaPower)
{
	if (Role == ROLE_Authority)
	{
		//change current power
		CurrentPower += DeltaPower;
		//Set movement speed based on power level
		GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + SpeedFactor * CurrentPower;

		//Fake the RepNotify (Listen Server wouldn't get RepNotify for the values)
		OnRep_CurrentPower();
	}
}

void AOnlineBatteryCollectCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AOnlineBatteryCollectCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AOnlineBatteryCollectCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AOnlineBatteryCollectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AOnlineBatteryCollectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AOnlineBatteryCollectCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AOnlineBatteryCollectCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
