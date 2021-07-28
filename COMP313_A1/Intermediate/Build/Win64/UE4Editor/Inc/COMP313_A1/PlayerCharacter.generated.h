// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP313_A1_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define COMP313_A1_PlayerCharacter_generated_h

#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_SPARSE_DATA
#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP313_A1"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP313_A1"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_11_PROLOG
#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_SPARSE_DATA \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_RPC_WRAPPERS \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_INCLASS \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_SPARSE_DATA \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	COMP313_A1_Source_COMP313_A1_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP313_A1_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COMP313_A1_Source_COMP313_A1_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
