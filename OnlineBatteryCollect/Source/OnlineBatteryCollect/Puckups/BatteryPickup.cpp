// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABatteryPickup::ABatteryPickup()
{
	// Keep Movement Synched for all clients and server
	bReplicateMovement = true;

	// Giving this class default physics behavior
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);

	//Set base value for power
	BatteryPower = 50.f;
}



void ABatteryPickup::PickedUpBy(APawn * Pawn)
{
	Super::PickedUpBy(Pawn);

	if (Role == ROLE_Authority)
	{
		// Give clients some time to do things with it before destroying it
		SetLifeSpan(2.f);
	}
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}

void ABatteryPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABatteryPickup, BatteryPower);
}
