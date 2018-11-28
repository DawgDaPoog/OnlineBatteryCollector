// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ONLINEBATTERYCOLLECT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define ONLINEBATTERYCOLLECT_Pickup_generated_h

#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_RPC_WRAPPERS \
	virtual void ClientOnPickedUp_Implementation(APawn* Pawn); \
	virtual void WasCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execClientOnPickedUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientOnPickedUp_Implementation(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickedUpBy) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpBy(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_ActiveToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_ActiveToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientOnPickedUp_Implementation(APawn* Pawn); \
 \
	DECLARE_FUNCTION(execClientOnPickedUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientOnPickedUp_Implementation(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickedUpBy) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpBy(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_ActiveToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_ActiveToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_EVENT_PARMS \
	struct Pickup_eventClientOnPickedUp_Parms \
	{ \
		APawn* Pawn; \
	};


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_CALLBACK_WRAPPERS
#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(APickup, bIsActive); } \
	FORCEINLINE static uint32 __PPO__PickupInstigator() { return STRUCT_OFFSET(APickup, PickupInstigator); }


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_13_PROLOG \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_EVENT_PARMS


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_RPC_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_CALLBACK_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_INCLASS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_CALLBACK_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_INCLASS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OnlineBatteryCollect_Source_OnlineBatteryCollect_Puckups_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
