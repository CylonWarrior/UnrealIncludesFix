// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatManagerComponent;
#ifdef TGP_StatEffect_generated_h
#error "StatEffect.generated.h already included, missing '#pragma once' in StatEffect.h"
#endif
#define TGP_StatEffect_generated_h

#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_RPC_WRAPPERS \
	virtual bool TickStatModifier_Implementation(float DeltaTime); \
	virtual void BeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execGetParentManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStatManagerComponent**)Z_Param__Result=this->GetParentManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickStatModifier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TickStatModifier_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginPlay_Implementation(); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParentManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStatManagerComponent**)Z_Param__Result=this->GetParentManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickStatModifier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TickStatModifier_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginPlay_Implementation(); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_EVENT_PARMS \
	struct StatEffect_eventTickStatModifier_Parms \
	{ \
		float DeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StatEffect_eventTickStatModifier_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_CALLBACK_WRAPPERS
#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatEffect(); \
	friend TGP_API class UClass* Z_Construct_UClass_UStatEffect(); \
public: \
	DECLARE_CLASS(UStatEffect, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UStatEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUStatEffect(); \
	friend TGP_API class UClass* Z_Construct_UClass_UStatEffect(); \
public: \
	DECLARE_CLASS(UStatEffect, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UStatEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatEffect(UStatEffect&&); \
	NO_API UStatEffect(const UStatEffect&); \
public:


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatEffect(UStatEffect&&); \
	NO_API UStatEffect(const UStatEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatEffect)


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StatEffectName() { return STRUCT_OFFSET(UStatEffect, StatEffectName); } \
	FORCEINLINE static uint32 __PPO__IsStackable() { return STRUCT_OFFSET(UStatEffect, IsStackable); }


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_20_PROLOG \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_EVENT_PARMS


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_CALLBACK_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_INCLASS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_CALLBACK_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_UnitStats_StatEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
