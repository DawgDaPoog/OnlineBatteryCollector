// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Pickup.generated.h"


/**
 * 
 */
UCLASS()
class ONLINEBATTERYCOLLECT_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()
public:
		APickup();
	
		//Required for network replication
		void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
		
		//Returns if a pickup is empty or not
		UFUNCTION(BlueprintPure, Category = "Pickup")
		bool IsActive();

		//Sets pickup state
		UFUNCTION(BlueprintCallable, Category = "Pickup")
		void SetActive(bool ActiveToSet);

		//Function is called when pickup is collected
		UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
		void WasCollected();
		virtual void WasCollected_Implementation();

		// Server side handling on being picked up
		UFUNCTION(BlueprintAuthorityOnly, Category = "Pickup")
		virtual void PickedUpBy(APawn* Pawn);
protected:
	// True if the puckup can be used, false if can't
	UPROPERTY(ReplicatedUsing = OnRep_isActive)
	bool bIsActive;
	
	// Called whenever bIsActive is updated
	UFUNCTION()
	virtual void OnRep_isActive();

	// The pawn who picked up the pickup
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	APawn* PickupInstigator;

private:
	// Client-side handling of being picked up
	UFUNCTION(NetMulticast, Unreliable)
	void ClientOnPickedUp(APawn* Pawn);
};
