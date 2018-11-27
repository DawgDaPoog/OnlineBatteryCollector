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
// End Cross Module References
	void AOnlineBatteryCollectGameMode::StaticRegisterNativesAOnlineBatteryCollectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOnlineBatteryCollectGameMode_NoRegister()
	{
		return AOnlineBatteryCollectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineBatteryCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OnlineBatteryCollectGameMode.h" },
		{ "ModuleRelativePath", "OnlineBatteryCollectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBatteryCollectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBatteryCollectGameMode_Statics::ClassParams = {
		&AOnlineBatteryCollectGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AOnlineBatteryCollectGameMode, 138795516);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBatteryCollectGameMode(Z_Construct_UClass_AOnlineBatteryCollectGameMode, &AOnlineBatteryCollectGameMode::StaticClass, TEXT("/Script/OnlineBatteryCollect"), TEXT("AOnlineBatteryCollectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBatteryCollectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
