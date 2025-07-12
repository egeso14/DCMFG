// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DCMFGGameMode.h"

#ifdef DCMFG_DCMFGGameMode_generated_h
#error "DCMFGGameMode.generated.h already included, missing '#pragma once' in DCMFGGameMode.h"
#endif
#define DCMFG_DCMFGGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADCMFGGameMode ***********************************************************
DCMFG_API UClass* Z_Construct_UClass_ADCMFGGameMode_NoRegister();

#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADCMFGGameMode(); \
	friend struct Z_Construct_UClass_ADCMFGGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DCMFG_API UClass* Z_Construct_UClass_ADCMFGGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADCMFGGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DCMFG"), Z_Construct_UClass_ADCMFGGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADCMFGGameMode)


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADCMFGGameMode(ADCMFGGameMode&&) = delete; \
	ADCMFGGameMode(const ADCMFGGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCMFGGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCMFGGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADCMFGGameMode) \
	NO_API virtual ~ADCMFGGameMode();


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_12_PROLOG
#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADCMFGGameMode;

// ********** End Class ADCMFGGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
