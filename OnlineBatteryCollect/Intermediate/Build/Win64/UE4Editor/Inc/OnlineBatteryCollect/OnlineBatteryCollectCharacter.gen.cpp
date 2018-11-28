// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineBatteryCollect/OnlineBatteryCollectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBatteryCollectCharacter() {}
// Cross Module References
	ONLINEBATTERYCOLLECT_API UClass* Z_Construct_UClass_AOnlineBatteryCollectCharacter_NoRegister();
	ONLINEBATTERYCOLLECT_API UClass* Z_Construct_UClass_AOnlineBatteryCollectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_OnlineBatteryCollect();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_AOnlineBatteryCollectCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
	void AOnlineBatteryCollectCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOnlineBatteryCollectCharacter_PowerChangeEffect),NULL);
	}
	static FName NAME_AOnlineBatteryCollectCharacter_ServerCollectPickups = FName(TEXT("ServerCollectPickups"));
	void AOnlineBatteryCollectCharacter::ServerCollectPickups()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOnlineBatteryCollectCharacter_ServerCollectPickups),NULL);
	}
	void AOnlineBatteryCollectCharacter::StaticRegisterNativesAOnlineBatteryCollectCharacter()
	{
		UClass* Class = AOnlineBatteryCollectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &AOnlineBatteryCollectCharacter::execCollectPickups },
			{ "GetCurrentPower", &AOnlineBatteryCollectCharacter::execGetCurrentPower },
			{ "GetInitialPower", &AOnlineBatteryCollectCharacter::execGetInitialPower },
			{ "OnRep_CurrentPower", &AOnlineBatteryCollectCharacter::execOnRep_CurrentPower },
			{ "ServerCollectPickups", &AOnlineBatteryCollectCharacter::execServerCollectPickups },
			{ "UpdatePower", &AOnlineBatteryCollectCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Entry. Called when player presses the pickup button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "CollectPickups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics
	{
		struct OnlineBatteryCollectCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OnlineBatteryCollectCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Access characters current power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "GetCurrentPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(OnlineBatteryCollectCharacter_eventGetCurrentPower_Parms), Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics
	{
		struct OnlineBatteryCollectCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OnlineBatteryCollectCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Access characters initial power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "GetInitialPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(OnlineBatteryCollectCharacter_eventGetInitialPower_Parms), Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Power level is updated on clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "OnRep_CurrentPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Update character visuals based on current power level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "PowerChangeEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "ServerCollectPickups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics
	{
		struct OnlineBatteryCollectCharacter_eventUpdatePower_Parms
		{
			float DeltaPower;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::NewProp_DeltaPower = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OnlineBatteryCollectCharacter_eventUpdatePower_Parms, DeltaPower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::NewProp_DeltaPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "This updates the character's power level\n@param DeltaPower this is the amount to change power by (can be + or -)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectCharacter, "UpdatePower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(OnlineBatteryCollectCharacter_eventUpdatePower_Parms), Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOnlineBatteryCollectCharacter_NoRegister()
	{
		return AOnlineBatteryCollectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollectionSphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineBatteryCollect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_CollectPickups, "CollectPickups" }, // 850036771
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetCurrentPower, "GetCurrentPower" }, // 4255249422
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_GetInitialPower, "GetInitialPower" }, // 295346085
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_OnRep_CurrentPower, "OnRep_CurrentPower" }, // 2004533323
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_PowerChangeEffect, "PowerChangeEffect" }, // 4245355788
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_ServerCollectPickups, "ServerCollectPickups" }, // 21013706
		{ &Z_Construct_UFunction_AOnlineBatteryCollectCharacter_UpdatePower, "UpdatePower" }, // 4213837483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OnlineBatteryCollectCharacter.h" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CurrentPower_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Characters power level during gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CurrentPower = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100020021, 1, "OnRep_CurrentPower", STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CurrentPower), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CurrentPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CurrentPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphereRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Battery" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CollectionSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020035, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CollectionSphereRadius), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Multiplier controlling our movement speed depending on the power level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_SpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_SpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Speed when power level is zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_InitialPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Character's starting power level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_InitialPower = { UE4CodeGen_Private::EPropertyClass::Float, "InitialPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, InitialPower), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_InitialPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_InitialPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Collection Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphere = { UE4CodeGen_Private::EPropertyClass::Object, "CollectionSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OnlineBatteryCollectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CurrentPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_InitialPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBatteryCollectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::ClassParams = {
		&AOnlineBatteryCollectCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBatteryCollectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBatteryCollectCharacter, 3774934595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBatteryCollectCharacter(Z_Construct_UClass_AOnlineBatteryCollectCharacter, &AOnlineBatteryCollectCharacter::StaticClass, TEXT("/Script/OnlineBatteryCollect"), TEXT("AOnlineBatteryCollectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBatteryCollectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
