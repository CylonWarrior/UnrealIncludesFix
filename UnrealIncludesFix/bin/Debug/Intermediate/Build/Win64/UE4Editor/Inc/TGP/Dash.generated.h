// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_Dash_generated_h
#error "Dash.generated.h already included, missing '#pragma once' in Dash.h"
#endif
#define TGP_Dash_generated_h

#define TheGauntletPrismatic_Source_TGP_Dash_h_16_RPC_WRAPPERS
#define TheGauntletPrismatic_Source_TGP_Dash_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define TheGauntletPrismatic_Source_TGP_Dash_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDash(); \
	friend TGP_API class UClass* Z_Construct_UClass_UDash(); \
public: \
	DECLARE_CLASS(UDash, UAction, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UDash) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_Dash_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDash(); \
	friend TGP_API class UClass* Z_Construct_UClass_UDash(); \
public: \
	DECLARE_CLASS(UDash, UAction, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UDash) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_Dash_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDash(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDash(UDash&&); \
	NO_API UDash(const UDash&); \
public:


#define TheGauntletPrismatic_Source_TGP_Dash_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDash(UDash&&); \
	NO_API UDash(const UDash&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDash); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDash)


#define TheGauntletPrismatic_Source_TGP_Dash_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMaxDashCount() { return STRUCT_OFFSET(UDash, mMaxDashCount); } \
	FORCEINLINE static uint32 __PPO__mCurrentDashCount() { return STRUCT_OFFSET(UDash, mCurrentDashCount); } \
	FORCEINLINE static uint32 __PPO__mMaxDashCoolDown() { return STRUCT_OFFSET(UDash, mMaxDashCoolDown); } \
	FORCEINLINE static uint32 __PPO__mCurrentDashCoolDown() { return STRUCT_OFFSET(UDash, mCurrentDashCoolDown); } \
	FORCEINLINE static uint32 __PPO__mTimePausedInAir() { return STRUCT_OFFSET(UDash, mTimePausedInAir); } \
	FORCEINLINE static uint32 __PPO__mOriginalDashSpeed() { return STRUCT_OFFSET(UDash, mOriginalDashSpeed); }


#define TheGauntletPrismatic_Source_TGP_Dash_h_13_PROLOG
#define TheGauntletPrismatic_Source_TGP_Dash_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_INCLASS \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_Dash_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_Dash_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_Dash_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
