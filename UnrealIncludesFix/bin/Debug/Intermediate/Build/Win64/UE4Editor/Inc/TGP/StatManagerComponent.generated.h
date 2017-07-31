// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatEffect;
#ifdef TGP_StatManagerComponent_generated_h
#error "StatManagerComponent.generated.h already included, missing '#pragma once' in StatManagerComponent.h"
#endif
#define TGP_StatManagerComponent_generated_h

#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStatModifier) \
	{ \
		P_GET_OBJECT(UStatEffect,Z_Param_statModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddStatModifier(Z_Param_statModifier); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStatModifier) \
	{ \
		P_GET_OBJECT(UStatEffect,Z_Param_statModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddStatModifier(Z_Param_statModifier); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatManagerComponent(); \
	friend TGP_API class UClass* Z_Construct_UClass_UStatManagerComponent(); \
public: \
	DECLARE_CLASS(UStatManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UStatManagerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUStatManagerComponent(); \
	friend TGP_API class UClass* Z_Construct_UClass_UStatManagerComponent(); \
public: \
	DECLARE_CLASS(UStatManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UStatManagerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatManagerComponent(UStatManagerComponent&&); \
	NO_API UStatManagerComponent(const UStatManagerComponent&); \
public:


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatManagerComponent(UStatManagerComponent&&); \
	NO_API UStatManagerComponent(const UStatManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatManagerComponent)


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_20_PROLOG
#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_INCLASS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_UnitStats_StatManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
