// Fill out your copyright notice in the Description page of Project Settings.

#include "OBCGameState.h"
#include "Net/UnrealNetwork.h"

AOBCGameState::AOBCGameState()
{
	// Initializing PowerToWin to avoid empty variable
	PowerToWin = 0.f;

	CurrentState = EBatteryPlayState::EUnknown;
}

void AOBCGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AOBCGameState, PowerToWin);
	DOREPLIFETIME(AOBCGameState, CurrentState);
}

EBatteryPlayState AOBCGameState::GetCurrentState() const
{
	return CurrentState;
}

void AOBCGameState::SetCurrentState(EBatteryPlayState NewState)
{
	if (Role = ROLE_Authority)
	{
		CurrentState = NewState;
	}
}

void AOBCGameState::OnRep_CurrentState()
{

}
