// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINEBATTERYCOLLECT_OnlineBatteryCollectGameMode_generated_h
#error "OnlineBatteryCollectGameMode.generated.h already included, missing '#pragma once' in OnlineBatteryCollectGameMode.h"
#endif
#define ONLINEBATTERYCOLLECT_OnlineBatteryCollectGameMode_generated_h

#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPowerToWinMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWinMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDecayRate(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPowerToWinMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWinMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDecayRate(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineBatteryCollectGameMode(); \
	friend struct Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics; \
public: \
	DECLARE_CLASS(AOnlineBatteryCollectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), ONLINEBATTERYCOLLECT_API) \
	DECLARE_SERIALIZER(AOnlineBatteryCollectGameMode)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBatteryCollectGameMode(); \
	friend struct Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics; \
public: \
	DECLARE_CLASS(AOnlineBatteryCollectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), ONLINEBATTERYCOLLECT_API) \
	DECLARE_SERIALIZER(AOnlineBatteryCollectGameMode)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINEBATTERYCOLLECT_API AOnlineBatteryCollectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBatteryCollectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEBATTERYCOLLECT_API, AOnlineBatteryCollectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBatteryCollectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEBATTERYCOLLECT_API AOnlineBatteryCollectGameMode(AOnlineBatteryCollectGameMode&&); \
	ONLINEBATTERYCOLLECT_API AOnlineBatteryCollectGameMode(const AOnlineBatteryCollectGameMode&); \
public:


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEBATTERYCOLLECT_API AOnlineBatteryCollectGameMode(AOnlineBatteryCollectGameMode&&); \
	ONLINEBATTERYCOLLECT_API AOnlineBatteryCollectGameMode(const AOnlineBatteryCollectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEBATTERYCOLLECT_API, AOnlineBatteryCollectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBatteryCollectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOnlineBatteryCollectGameMode)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerDrainDelay() { return STRUCT_OFFSET(AOnlineBatteryCollectGameMode, PowerDrainDelay); } \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(AOnlineBatteryCollectGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWinMultiplier() { return STRUCT_OFFSET(AOnlineBatteryCollectGameMode, PowerToWinMultiplier); }


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_9_PROLOG
#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_RPC_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_INCLASS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
