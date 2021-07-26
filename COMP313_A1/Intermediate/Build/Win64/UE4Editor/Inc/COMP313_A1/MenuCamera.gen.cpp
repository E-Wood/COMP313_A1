// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP313_A1/MenuCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuCamera() {}
// Cross Module References
	COMP313_A1_API UClass* Z_Construct_UClass_AMenuCamera_NoRegister();
	COMP313_A1_API UClass* Z_Construct_UClass_AMenuCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_COMP313_A1();
// End Cross Module References
	void AMenuCamera::StaticRegisterNativesAMenuCamera()
	{
	}
	UClass* Z_Construct_UClass_AMenuCamera_NoRegister()
	{
		return AMenuCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMenuCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP313_A1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuCamera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "MenuCamera.h" },
		{ "ModuleRelativePath", "MenuCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuCamera_Statics::ClassParams = {
		&AMenuCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMenuCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuCamera, 3431653664);
	template<> COMP313_A1_API UClass* StaticClass<AMenuCamera>()
	{
		return AMenuCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuCamera(Z_Construct_UClass_AMenuCamera, &AMenuCamera::StaticClass, TEXT("/Script/COMP313_A1"), TEXT("AMenuCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
