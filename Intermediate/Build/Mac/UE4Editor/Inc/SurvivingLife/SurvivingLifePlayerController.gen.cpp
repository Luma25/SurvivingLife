// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SurvivingLifePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivingLifePlayerController() {}
// Cross Module References
	SURVIVINGLIFE_API UClass* Z_Construct_UClass_ASurvivingLifePlayerController_NoRegister();
	SURVIVINGLIFE_API UClass* Z_Construct_UClass_ASurvivingLifePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SurvivingLife();
// End Cross Module References
	void ASurvivingLifePlayerController::StaticRegisterNativesASurvivingLifePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASurvivingLifePlayerController_NoRegister()
	{
		return ASurvivingLifePlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ASurvivingLifePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_SurvivingLife,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SurvivingLifePlayerController.h" },
				{ "ModuleRelativePath", "SurvivingLifePlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASurvivingLifePlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASurvivingLifePlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivingLifePlayerController, 4118185314);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivingLifePlayerController(Z_Construct_UClass_ASurvivingLifePlayerController, &ASurvivingLifePlayerController::StaticClass, TEXT("/Script/SurvivingLife"), TEXT("ASurvivingLifePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivingLifePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
