// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "OnlineBatteryCollectGameMode.h"
#include "OnlineBatteryCollectCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"

AOnlineBatteryCollectGameMode::AOnlineBatteryCollectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//Base value decay rate
	DecayRate = 0.05f;

	//Base value for how frequently to drain power
	PowerDrainDelay = 0.25f;
}
void AOnlineBatteryCollectGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &AOnlineBatteryCollectGameMode::DrainPowerOverTime, PowerDrainDelay, true);
}
float AOnlineBatteryCollectGameMode::GetDecayRate()
{
	return DecayRate;
}

void AOnlineBatteryCollectGameMode::DrainPowerOverTime()
{
	// Access world to get to the players
	UWorld* World = GetWorld();
	check(World);

	// Go through all the characters in the game
	for (FConstControllerIterator It = World->GetControllerIterator(); It; ++It)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (AOnlineBatteryCollectCharacter* BatteryCharacter = Cast<AOnlineBatteryCollectCharacter>(PlayerController->GetPawn()))
			{
				if (BatteryCharacter->GetCurrentPower() > 0)
				{
					BatteryCharacter->UpdatePower(-PowerDrainDelay * DecayRate*(BatteryCharacter->GetInitialPower()));
				}
			}
		}
	}
}
