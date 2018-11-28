// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineBatteryCollect/OnlineBatteryCollectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBatteryCollectGameMode() {}
// Cross Module References
	ONLINEBATTERYCOLLECT_API UClass* Z_Construct_UClass_AOnlineBatteryCollectGameMode_NoRegister();
	ONLINEBATTERYCOLLECT_API UClass* Z_Construct_UClass_AOnlineBatteryCollectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OnlineBatteryCollect();
	ONLINEBATTERYCOLLECT_API UFunction* Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate();
// End Cross Module References
	void AOnlineBatteryCollectGameMode::StaticRegisterNativesAOnlineBatteryCollectGameMode()
	{
		UClass* Class = AOnlineBatteryCollectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecayRate", &AOnlineBatteryCollectGameMode::execGetDecayRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics
	{
		struct OnlineBatteryCollectGameMode_eventGetDecayRate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OnlineBatteryCollectGameMode_eventGetDecayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectGameMode.h" },
		{ "ToolTip", "Get current Rate of decay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBatteryCollectGameMode, "GetDecayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(OnlineBatteryCollectGameMode_eventGetDecayRate_Parms), Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOnlineBatteryCollectGameMode_NoRegister()
	{
		return AOnlineBatteryCollectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerDrainDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerDrainDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineBatteryCollect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnlineBatteryCollectGameMode_GetDecayRate, "GetDecayRate" }, // 4090049203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OnlineBatteryCollectGameMode.h" },
		{ "ModuleRelativePath", "OnlineBatteryCollectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectGameMode.h" },
		{ "ToolTip", "the rate at which power will decay on each character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_DecayRate = { UE4CodeGen_Private::EPropertyClass::Float, "DecayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_PowerDrainDelay_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "OnlineBatteryCollectGameMode.h" },
		{ "ToolTip", "How many times per second to update characters power anc check game rules" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_PowerDrainDelay = { UE4CodeGen_Private::EPropertyClass::Float, "PowerDrainDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AOnlineBatteryCollectGameMode, PowerDrainDelay), METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_PowerDrainDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_PowerDrainDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_DecayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::NewProp_PowerDrainDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBatteryCollectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::ClassParams = {
		&AOnlineBatteryCollectGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBatteryCollectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBatteryCollectGameMode, 3939428561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBatteryCollectGameMode(Z_Construct_UClass_AOnlineBatteryCollectGameMode, &AOnlineBatteryCollectGameMode::StaticClass, TEXT("/Script/OnlineBatteryCollect"), TEXT("AOnlineBatteryCollectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBatteryCollectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
