// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

APickup::APickup()
{
	// Needs to be replicated for all connected actors to see it.
	bReplicates = true;

	// Doesn't need to tick
	PrimaryActorTick.bCanEverTick = false;

	GetStaticMeshComponent()->SetGenerateOverlapEvents(true);

	if (Role = ROLE_Authority)
	{
		bIsActive = true;
	}
}

void APickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);
}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool ActiveToSet)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = ActiveToSet;
	}
}

void APickup::WasCollected_Implementation()
{
	//Empty

	UE_LOG(LogClass, Log, TEXT("WasCollected_Implementation %s"), *GetName());
}

void APickup::PickedUpBy(APawn * Pawn)
{
	if (Role == ROLE_Authority)
	{
		// Store the pawn that picked up the pickup
		PickupInstigator = Pawn;
		// Notify clients that a pickup was picked up
		ClientOnPickedUp(Pawn);
	}
}

void APickup::ClientOnPickedUp_Implementation(APawn * Pawn)
{
	// Store the pawn that picked up this pickup
	PickupInstigator = Pawn;
	// Fire off the BlueprintNativeEvent that itself can't be replicated
	WasCollected();
}

void APickup::OnRep_isActive()
{
	//Empty
}
