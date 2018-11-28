// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OnlineBatteryCollectGameMode.generated.h"

UCLASS(minimalapi)
class AOnlineBatteryCollectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AOnlineBatteryCollectGameMode();
	
	// Set power drain timer here
	virtual void BeginPlay() override;

	//Get current Rate of decay
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetDecayRate();

protected:
	// How many times per second to update characters power anc check game rules
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Power")
	float PowerDrainDelay;

	//Timer handle for decaying power
	FTimerHandle PowerDrainTimer;

	// the rate at which power will decay on each character
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float DecayRate;

	//Drain power from characters and check game rules following
	void DrainPowerOverTime();
};



