// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnVolume.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "../Puckups/BatteryPickup.h"
#include "TimerManager.h"

// Sets default values
ASpawnVolume::ASpawnVolume()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if(Role = ROLE_Authority)
	{
		WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolume"));
		RootComponent = WhereToSpawn;

		//Set some base values for range
		SpawnDelayRangeLow = 1.f;
		SpawnDelayRangeHigh = 4.f;
	}
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();

	//Set spawn delay and start spawning
	SpawnDelay = FMath::RandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ASpawnVolume::GetRandomPointInVolume()
{
	if (WhereToSpawn)
	{
		FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
		FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;
		return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
	}
	return FVector();
}

void ASpawnVolume::SpawnPickup()
{
	// If we are the server and we have a class to spawn
	if (Role == ROLE_Authority && WhatToSpawn)
	{
		// Check for valid world
		if (UWorld* const World = GetWorld())
		{
			// Setup any req params
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			// Where shall we put the pickup
			FVector SpawnLocation = GetRandomPointInVolume();

			//SetRandomRotation for spawn
			FRotator SpawnRotation;
			SpawnRotation = FRotator(FMath::RandRange(0.f,360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
			
			//Spawn pickup into the world
			APickup* const SpawnedPickup = World->SpawnActor<APickup>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
		
			// Delay and call timer manager again
			SpawnDelay = FMath::RandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(TimerHandle, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
		}
	}
}

