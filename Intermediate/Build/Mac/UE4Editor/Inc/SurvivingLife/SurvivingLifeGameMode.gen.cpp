// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SurvivingLifeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivingLifeGameMode() {}
// Cross Module References
	SURVIVINGLIFE_API UClass* Z_Construct_UClass_ASurvivingLifeGameMode_NoRegister();
	SURVIVINGLIFE_API UClass* Z_Construct_UClass_ASurvivingLifeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SurvivingLife();
// End Cross Module References
	void ASurvivingLifeGameMode::StaticRegisterNativesASurvivingLifeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASurvivingLifeGameMode_NoRegister()
	{
		return ASurvivingLifeGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASurvivingLifeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SurvivingLife,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SurvivingLifeGameMode.h" },
				{ "ModuleRelativePath", "SurvivingLifeGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASurvivingLifeGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASurvivingLifeGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivingLifeGameMode, 2965036870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivingLifeGameMode(Z_Construct_UClass_ASurvivingLifeGameMode, &ASurvivingLifeGameMode::StaticClass, TEXT("/Script/SurvivingLife"), TEXT("ASurvivingLifeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivingLifeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
