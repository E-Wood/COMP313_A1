// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP313_A1/COMP313_A1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMP313_A1GameMode() {}
// Cross Module References
	COMP313_A1_API UClass* Z_Construct_UClass_ACOMP313_A1GameMode_NoRegister();
	COMP313_A1_API UClass* Z_Construct_UClass_ACOMP313_A1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COMP313_A1();
// End Cross Module References
	void ACOMP313_A1GameMode::StaticRegisterNativesACOMP313_A1GameMode()
	{
	}
	UClass* Z_Construct_UClass_ACOMP313_A1GameMode_NoRegister()
	{
		return ACOMP313_A1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACOMP313_A1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMP313_A1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP313_A1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMP313_A1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "COMP313_A1GameMode.h" },
		{ "ModuleRelativePath", "COMP313_A1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMP313_A1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMP313_A1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMP313_A1GameMode_Statics::ClassParams = {
		&ACOMP313_A1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACOMP313_A1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOMP313_A1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMP313_A1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMP313_A1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMP313_A1GameMode, 219350900);
	template<> COMP313_A1_API UClass* StaticClass<ACOMP313_A1GameMode>()
	{
		return ACOMP313_A1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMP313_A1GameMode(Z_Construct_UClass_ACOMP313_A1GameMode, &ACOMP313_A1GameMode::StaticClass, TEXT("/Script/COMP313_A1"), TEXT("ACOMP313_A1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMP313_A1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
