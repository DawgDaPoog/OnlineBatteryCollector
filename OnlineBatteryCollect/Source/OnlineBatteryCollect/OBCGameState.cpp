// Fill out your copyright notice in the Description page of Project Settings.

#include "OBCGameState.h"
#include "Net/UnrealNetwork.h"

AOBCGameState::AOBCGameState()
{
	// Initializing PowerToWin to avoid empty variable
	PowerToWin = 0.f;
}

void AOBCGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AOBCGameState, PowerToWin);
}
