// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "OBCGameState.generated.h"

/**
 * 
 */
UCLASS()
class ONLINEBATTERYCOLLECT_API AOBCGameState : public AGameState
{
	GENERATED_BODY()

public:
	AOBCGameState();

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Power")
	float PowerToWin;

	// Network setup
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};
