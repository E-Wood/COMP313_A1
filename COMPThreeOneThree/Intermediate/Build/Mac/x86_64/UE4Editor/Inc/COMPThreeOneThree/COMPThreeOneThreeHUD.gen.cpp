// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMPThreeOneThree/COMPThreeOneThreeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMPThreeOneThreeHUD() {}
// Cross Module References
	COMPTHREEONETHREE_API UClass* Z_Construct_UClass_ACOMPThreeOneThreeHUD_NoRegister();
	COMPTHREEONETHREE_API UClass* Z_Construct_UClass_ACOMPThreeOneThreeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_COMPThreeOneThree();
// End Cross Module References
	void ACOMPThreeOneThreeHUD::StaticRegisterNativesACOMPThreeOneThreeHUD()
	{
	}
	UClass* Z_Construct_UClass_ACOMPThreeOneThreeHUD_NoRegister()
	{
		return ACOMPThreeOneThreeHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_COMPThreeOneThree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "COMPThreeOneThreeHUD.h" },
		{ "ModuleRelativePath", "COMPThreeOneThreeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMPThreeOneThreeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::ClassParams = {
		&ACOMPThreeOneThreeHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMPThreeOneThreeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMPThreeOneThreeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMPThreeOneThreeHUD, 3387100647);
	template<> COMPTHREEONETHREE_API UClass* StaticClass<ACOMPThreeOneThreeHUD>()
	{
		return ACOMPThreeOneThreeHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMPThreeOneThreeHUD(Z_Construct_UClass_ACOMPThreeOneThreeHUD, &ACOMPThreeOneThreeHUD::StaticClass, TEXT("/Script/COMPThreeOneThree"), TEXT("ACOMPThreeOneThreeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMPThreeOneThreeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
