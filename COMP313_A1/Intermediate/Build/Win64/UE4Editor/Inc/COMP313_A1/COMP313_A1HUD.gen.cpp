// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP313_A1/COMP313_A1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMP313_A1HUD() {}
// Cross Module References
	COMP313_A1_API UClass* Z_Construct_UClass_ACOMP313_A1HUD_NoRegister();
	COMP313_A1_API UClass* Z_Construct_UClass_ACOMP313_A1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_COMP313_A1();
// End Cross Module References
	void ACOMP313_A1HUD::StaticRegisterNativesACOMP313_A1HUD()
	{
	}
	UClass* Z_Construct_UClass_ACOMP313_A1HUD_NoRegister()
	{
		return ACOMP313_A1HUD::StaticClass();
	}
	struct Z_Construct_UClass_ACOMP313_A1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMP313_A1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP313_A1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMP313_A1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "COMP313_A1HUD.h" },
		{ "ModuleRelativePath", "COMP313_A1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMP313_A1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMP313_A1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMP313_A1HUD_Statics::ClassParams = {
		&ACOMP313_A1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACOMP313_A1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOMP313_A1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMP313_A1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMP313_A1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMP313_A1HUD, 4216923702);
	template<> COMP313_A1_API UClass* StaticClass<ACOMP313_A1HUD>()
	{
		return ACOMP313_A1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMP313_A1HUD(Z_Construct_UClass_ACOMP313_A1HUD, &ACOMP313_A1HUD::StaticClass, TEXT("/Script/COMP313_A1"), TEXT("ACOMP313_A1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMP313_A1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
