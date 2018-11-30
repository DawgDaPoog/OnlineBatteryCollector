// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "OBCGameState.generated.h"

UENUM(BlueprintType)
enum EBatteryPlayState
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};
/**
 * 
 */
UCLASS()
class ONLINEBATTERYCOLLECT_API AOBCGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AOBCGameState();

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Power")
	float PowerToWin;

	// Network setup
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	// Set game state to a new one
	void SetCurrentState(EBatteryPlayState NewState);

	// Notify that fires on clients to tell them that CurrentState has changed
	UFUNCTION()
	void OnRep_CurrentState();
private:
	UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
	TEnumAsByte<enum EBatteryPlayState> CurrentState;
};
