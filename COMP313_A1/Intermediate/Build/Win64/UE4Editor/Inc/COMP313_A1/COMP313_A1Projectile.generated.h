// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef COMP313_A1_COMP313_A1Projectile_generated_h
#error "COMP313_A1Projectile.generated.h already included, missing '#pragma once' in COMP313_A1Projectile.h"
#endif
#define COMP313_A1_COMP313_A1Projectile_generated_h

#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_SPARSE_DATA
#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACOMP313_A1Projectile(); \
	friend struct Z_Construct_UClass_ACOMP313_A1Projectile_Statics; \
public: \
	DECLARE_CLASS(ACOMP313_A1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP313_A1"), NO_API) \
	DECLARE_SERIALIZER(ACOMP313_A1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACOMP313_A1Projectile(); \
	friend struct Z_Construct_UClass_ACOMP313_A1Projectile_Statics; \
public: \
	DECLARE_CLASS(ACOMP313_A1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP313_A1"), NO_API) \
	DECLARE_SERIALIZER(ACOMP313_A1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACOMP313_A1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACOMP313_A1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOMP313_A1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOMP313_A1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACOMP313_A1Projectile(ACOMP313_A1Projectile&&); \
	NO_API ACOMP313_A1Projectile(const ACOMP313_A1Projectile&); \
public:


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACOMP313_A1Projectile(ACOMP313_A1Projectile&&); \
	NO_API ACOMP313_A1Projectile(const ACOMP313_A1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOMP313_A1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOMP313_A1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACOMP313_A1Projectile)


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACOMP313_A1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACOMP313_A1Projectile, ProjectileMovement); }


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_12_PROLOG
#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_SPARSE_DATA \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_RPC_WRAPPERS \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_INCLASS \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_SPARSE_DATA \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP313_A1_API UClass* StaticClass<class ACOMP313_A1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COMP313_A1_Source_COMP313_A1_COMP313_A1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
