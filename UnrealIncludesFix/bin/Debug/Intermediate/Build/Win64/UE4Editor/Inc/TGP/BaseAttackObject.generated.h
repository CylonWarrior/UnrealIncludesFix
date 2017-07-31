// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TGP_BaseAttackObject_generated_h
#error "BaseAttackObject.generated.h already included, missing '#pragma once' in BaseAttackObject.h"
#endif
#define TGP_BaseAttackObject_generated_h

#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAttackObject(); \
	friend TGP_API class UClass* Z_Construct_UClass_ABaseAttackObject(); \
public: \
	DECLARE_CLASS(ABaseAttackObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(ABaseAttackObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseAttackObject(); \
	friend TGP_API class UClass* Z_Construct_UClass_ABaseAttackObject(); \
public: \
	DECLARE_CLASS(ABaseAttackObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TGP"), NO_API) \
	DECLARE_SERIALIZER(ABaseAttackObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAttackObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAttackObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAttackObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAttackObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAttackObject(ABaseAttackObject&&); \
	NO_API ABaseAttackObject(const ABaseAttackObject&); \
public:


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAttackObject(ABaseAttackObject&&); \
	NO_API ABaseAttackObject(const ABaseAttackObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAttackObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAttackObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAttackObject)


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_PRIVATE_PROPERTY_OFFSET
#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_10_PROLOG
#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_RPC_WRAPPERS \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_INCLASS \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_PRIVATE_PROPERTY_OFFSET \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_INCLASS_NO_PURE_DECLS \
	TheGauntletPrismatic_Source_TGP_BaseAttackObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGauntletPrismatic_Source_TGP_BaseAttackObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
