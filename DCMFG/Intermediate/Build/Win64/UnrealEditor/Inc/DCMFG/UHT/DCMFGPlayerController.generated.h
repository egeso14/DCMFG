// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DCMFGPlayerController.h"

#ifdef DCMFG_DCMFGPlayerController_generated_h
#error "DCMFGPlayerController.generated.h already included, missing '#pragma once' in DCMFGPlayerController.h"
#endif
#define DCMFG_DCMFGPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADCMFGPlayerController ***************************************************
DCMFG_API UClass* Z_Construct_UClass_ADCMFGPlayerController_NoRegister();

#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADCMFGPlayerController(); \
	friend struct Z_Construct_UClass_ADCMFGPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DCMFG_API UClass* Z_Construct_UClass_ADCMFGPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADCMFGPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DCMFG"), Z_Construct_UClass_ADCMFGPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADCMFGPlayerController)


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADCMFGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADCMFGPlayerController(ADCMFGPlayerController&&) = delete; \
	ADCMFGPlayerController(const ADCMFGPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCMFGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCMFGPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADCMFGPlayerController) \
	NO_API virtual ~ADCMFGPlayerController();


#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_15_PROLOG
#define FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADCMFGPlayerController;

// ********** End Class ADCMFGPlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
