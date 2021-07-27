// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP313_A1/PlatformerGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGamemode() {}
// Cross Module References
	COMP313_A1_API UClass* Z_Construct_UClass_APlatformerGamemode_NoRegister();
	COMP313_A1_API UClass* Z_Construct_UClass_APlatformerGamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COMP313_A1();
// End Cross Module References
	void APlatformerGamemode::StaticRegisterNativesAPlatformerGamemode()
	{
	}
	UClass* Z_Construct_UClass_APlatformerGamemode_NoRegister()
	{
		return APlatformerGamemode::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP313_A1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGamemode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerGamemode.h" },
		{ "ModuleRelativePath", "PlatformerGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGamemode_Statics::ClassParams = {
		&APlatformerGamemode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerGamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerGamemode, 142166423);
	template<> COMP313_A1_API UClass* StaticClass<APlatformerGamemode>()
	{
		return APlatformerGamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerGamemode(Z_Construct_UClass_APlatformerGamemode, &APlatformerGamemode::StaticClass, TEXT("/Script/COMP313_A1"), TEXT("APlatformerGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
