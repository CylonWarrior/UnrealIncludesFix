// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_AICharacter_generated_h
#error "AICharacter.generated.h already included, missing '#pragma once' in AICharacter.h"
#endif
#define TGP_AICharacter_generated_h

#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthPercentage(); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthPercentage(); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend TGP_API class UClass* Z_Construct_UClass_AAICharacter(); \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend TGP_API class UClass* Z_Construct_UClass_AAICharacter(); \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public:


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacter)


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(AAICharacter, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__StatManagerComponent() { return STRUCT_OFFSET(AAICharacter, StatManagerComponent); } \
	FORCEINLINE static uint32 __PPO__HealthRegen() { return STRUCT_OFFSET(AAICharacter, HealthRegen); }


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_20_PROLOG
#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_INCLASS \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_AI_AICharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_AI_AICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
