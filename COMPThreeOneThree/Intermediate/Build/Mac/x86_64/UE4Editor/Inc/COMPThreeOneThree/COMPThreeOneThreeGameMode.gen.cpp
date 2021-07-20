// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMPThreeOneThree/COMPThreeOneThreeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMPThreeOneThreeGameMode() {}
// Cross Module References
	COMPTHREEONETHREE_API UClass* Z_Construct_UClass_ACOMPThreeOneThreeGameMode_NoRegister();
	COMPTHREEONETHREE_API UClass* Z_Construct_UClass_ACOMPThreeOneThreeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COMPThreeOneThree();
// End Cross Module References
	void ACOMPThreeOneThreeGameMode::StaticRegisterNativesACOMPThreeOneThreeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACOMPThreeOneThreeGameMode_NoRegister()
	{
		return ACOMPThreeOneThreeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COMPThreeOneThree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "COMPThreeOneThreeGameMode.h" },
		{ "ModuleRelativePath", "COMPThreeOneThreeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMPThreeOneThreeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::ClassParams = {
		&ACOMPThreeOneThreeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMPThreeOneThreeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMPThreeOneThreeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMPThreeOneThreeGameMode, 115952044);
	template<> COMPTHREEONETHREE_API UClass* StaticClass<ACOMPThreeOneThreeGameMode>()
	{
		return ACOMPThreeOneThreeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMPThreeOneThreeGameMode(Z_Construct_UClass_ACOMPThreeOneThreeGameMode, &ACOMPThreeOneThreeGameMode::StaticClass, TEXT("/Script/COMPThreeOneThree"), TEXT("ACOMPThreeOneThreeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMPThreeOneThreeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
