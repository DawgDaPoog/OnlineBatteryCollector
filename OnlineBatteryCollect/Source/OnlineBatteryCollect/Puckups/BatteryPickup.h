// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Puckups/Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class ONLINEBATTERYCOLLECT_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
public:
	ABatteryPickup();
	
	// Server side handling on being picked up by the child class
	//UFUNCTION(BlueprintAuthorityOnly, Category = "Pickup")
	virtual void PickedUpBy(APawn* Pawn) override;
	
	// Get the amount of power on battery
	float GetPower();

	// Required network setup
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
protected:
	// The amount of power the battery holds
	UPROPERTY(Replicated, EditAnywhere, Category = "Power", meta = (BlueprintProtected = "true"))
	float BatteryPower;
};
