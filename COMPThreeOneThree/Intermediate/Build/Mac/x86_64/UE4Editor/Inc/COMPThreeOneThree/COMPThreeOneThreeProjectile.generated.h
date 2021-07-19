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
#ifdef COMPTHREEONETHREE_COMPThreeOneThreeProjectile_generated_h
#error "COMPThreeOneThreeProjectile.generated.h already included, missing '#pragma once' in COMPThreeOneThreeProjectile.h"
#endif
#define COMPTHREEONETHREE_COMPThreeOneThreeProjectile_generated_h

#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_SPARSE_DATA
#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACOMPThreeOneThreeProjectile(); \
	friend struct Z_Construct_UClass_ACOMPThreeOneThreeProjectile_Statics; \
public: \
	DECLARE_CLASS(ACOMPThreeOneThreeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMPThreeOneThree"), NO_API) \
	DECLARE_SERIALIZER(ACOMPThreeOneThreeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACOMPThreeOneThreeProjectile(); \
	friend struct Z_Construct_UClass_ACOMPThreeOneThreeProjectile_Statics; \
public: \
	DECLARE_CLASS(ACOMPThreeOneThreeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMPThreeOneThree"), NO_API) \
	DECLARE_SERIALIZER(ACOMPThreeOneThreeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACOMPThreeOneThreeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACOMPThreeOneThreeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOMPThreeOneThreeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOMPThreeOneThreeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACOMPThreeOneThreeProjectile(ACOMPThreeOneThreeProjectile&&); \
	NO_API ACOMPThreeOneThreeProjectile(const ACOMPThreeOneThreeProjectile&); \
public:


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACOMPThreeOneThreeProjectile(ACOMPThreeOneThreeProjectile&&); \
	NO_API ACOMPThreeOneThreeProjectile(const ACOMPThreeOneThreeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOMPThreeOneThreeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOMPThreeOneThreeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACOMPThreeOneThreeProjectile)


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACOMPThreeOneThreeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACOMPThreeOneThreeProjectile, ProjectileMovement); }


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_12_PROLOG
#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_SPARSE_DATA \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_RPC_WRAPPERS \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_INCLASS \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_SPARSE_DATA \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPTHREEONETHREE_API UClass* StaticClass<class ACOMPThreeOneThreeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COMPThreeOneThree_Source_COMPThreeOneThree_COMPThreeOneThreeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
