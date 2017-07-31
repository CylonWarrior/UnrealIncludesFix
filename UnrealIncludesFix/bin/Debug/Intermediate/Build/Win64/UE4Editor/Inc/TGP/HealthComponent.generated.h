// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define TGP_HealthComponent_generated_h

#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentHealthPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealthPercent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReceiveHealth(Z_Param_health); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReceiveDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentHealthPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealthPercent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReceiveHealth(Z_Param_health); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReceiveDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend TGP_API class UClass* Z_Construct_UClass_UHealthComponent(); \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend TGP_API class UClass* Z_Construct_UClass_UHealthComponent(); \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UHealthComponent, CurrentHealth); }


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_20_PROLOG
#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_INCLASS \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_UnitStats_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
