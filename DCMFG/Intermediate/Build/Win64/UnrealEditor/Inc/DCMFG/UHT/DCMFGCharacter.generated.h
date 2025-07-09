// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DCMFGCharacter.h"

#ifdef DCMFG_DCMFGCharacter_generated_h
#error "DCMFGCharacter.generated.h already included, missing '#pragma once' in DCMFGCharacter.h"
#endif
#define DCMFG_DCMFGCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADCMFGCharacter **********************************************************
#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


DCMFG_API UClass* Z_Construct_UClass_ADCMFGCharacter_NoRegister();

#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADCMFGCharacter(); \
	friend struct Z_Construct_UClass_ADCMFGCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DCMFG_API UClass* Z_Construct_UClass_ADCMFGCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADCMFGCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DCMFG"), Z_Construct_UClass_ADCMFGCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADCMFGCharacter)


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADCMFGCharacter(ADCMFGCharacter&&) = delete; \
	ADCMFGCharacter(const ADCMFGCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCMFGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCMFGCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADCMFGCharacter) \
	NO_API virtual ~ADCMFGCharacter();


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_21_PROLOG
#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADCMFGCharacter;

// ********** End Class ADCMFGCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
