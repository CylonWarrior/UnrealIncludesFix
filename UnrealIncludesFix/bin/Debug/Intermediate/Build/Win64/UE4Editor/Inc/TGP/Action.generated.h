// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_Action_generated_h
#error "Action.generated.h already included, missing '#pragma once' in Action.h"
#endif
#define TGP_Action_generated_h

#define TheGauntletPrismatic_Source_TGP_Action_h_28_RPC_WRAPPERS
#define TheGauntletPrismatic_Source_TGP_Action_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define TheGauntletPrismatic_Source_TGP_Action_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAction(); \
	friend TGP_API class UClass* Z_Construct_UClass_UAction(); \
public: \
	DECLARE_CLASS(UAction, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UAction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_Action_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAction(); \
	friend TGP_API class UClass* Z_Construct_UClass_UAction(); \
public: \
	DECLARE_CLASS(UAction, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(UAction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_Action_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAction(UAction&&); \
	NO_API UAction(const UAction&); \
public:


#define TheGauntletPrismatic_Source_TGP_Action_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAction(UAction&&); \
	NO_API UAction(const UAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAction)


#define TheGauntletPrismatic_Source_TGP_Action_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mActionType() { return STRUCT_OFFSET(UAction, mActionType); } \
	FORCEINLINE static uint32 __PPO__mElementType() { return STRUCT_OFFSET(UAction, mElementType); } \
	FORCEINLINE static uint32 __PPO__mParticles() { return STRUCT_OFFSET(UAction, mParticles); }


#define TheGauntletPrismatic_Source_TGP_Action_h_25_PROLOG
#define TheGauntletPrismatic_Source_TGP_Action_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_Action_h_28_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_Action_h_28_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_Action_h_28_INCLASS \
	TheGauntletPrismatic_Source_TGP_Action_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_Action_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_Action_h_28_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_Action_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_Action_h_28_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_Action_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_Action_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
