// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OnlineBatteryCollectCharacter.generated.h"

UCLASS(config=Game)
class AOnlineBatteryCollectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Collection Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;
public:
	AOnlineBatteryCollectCharacter();

	// Required network setup
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	// Access characters initial power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	// Access characters current power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	/**
	* This updates the character's power level
	* @param DeltaPower this is the amount to change power by (can be + or -)
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Power")
	void UpdatePower(float DeltaPower);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	// Character's starting power level
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float InitialPower;
	
	// Speed when power level is zero
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float BaseSpeed;

	// Multiplier controlling our movement speed depending on the power level
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float SpeedFactor;

	// Update character visuals based on current power level
	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	// Entry. Called when player presses the pickup button
	UFUNCTION(BlueprintCallable, Category = "Pickups")
	void CollectPickups();

	UFUNCTION(Reliable, Server, WithValidation)
	void ServerCollectPickups();
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	/** Returns CollectionSphere subobject **/
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }

private:
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Battery", meta = (AllowPrivateAccess = "true"))
	float CollectionSphereRadius;

	// Characters power level during gameplay
	UPROPERTY(ReplicatedUsing = OnRep_CurrentPower, VisibleAnywhere, Category = "Power")
	float CurrentPower;

	//Power level is updated on clients
	UFUNCTION()
	void OnRep_CurrentPower();
};

