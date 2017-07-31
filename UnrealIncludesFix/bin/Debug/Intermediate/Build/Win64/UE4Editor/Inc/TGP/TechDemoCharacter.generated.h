// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_TechDemoCharacter_generated_h
#error "TechDemoCharacter.generated.h already included, missing '#pragma once' in TechDemoCharacter.h"
#endif
#define TGP_TechDemoCharacter_generated_h

#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_RPC_WRAPPERS
#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATechDemoCharacter(); \
	friend TGP_API class UClass* Z_Construct_UClass_ATechDemoCharacter(); \
public: \
	DECLARE_CLASS(ATechDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATechDemoCharacter(); \
	friend TGP_API class UClass* Z_Construct_UClass_ATechDemoCharacter(); \
public: \
	DECLARE_CLASS(ATechDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATechDemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATechDemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoCharacter(ATechDemoCharacter&&); \
	NO_API ATechDemoCharacter(const ATechDemoCharacter&); \
public:


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoCharacter(ATechDemoCharacter&&); \
	NO_API ATechDemoCharacter(const ATechDemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATechDemoCharacter)


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATechDemoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATechDemoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATechDemoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATechDemoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__decorator() { return STRUCT_OFFSET(ATechDemoCharacter, decorator); }


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_20_PROLOG
#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_INCLASS \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_TechDemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
