// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DCMFG/DCMFGGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDCMFGGameMode() {}

// ********** Begin Cross Module References ********************************************************
DCMFG_API UClass* Z_Construct_UClass_ADCMFGGameMode();
DCMFG_API UClass* Z_Construct_UClass_ADCMFGGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DCMFG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADCMFGGameMode ***********************************************************
void ADCMFGGameMode::StaticRegisterNativesADCMFGGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADCMFGGameMode;
UClass* ADCMFGGameMode::GetPrivateStaticClass()
{
	using TClass = ADCMFGGameMode;
	if (!Z_Registration_Info_UClass_ADCMFGGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DCMFGGameMode"),
			Z_Registration_Info_UClass_ADCMFGGameMode.InnerSingleton,
			StaticRegisterNativesADCMFGGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADCMFGGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADCMFGGameMode_NoRegister()
{
	return ADCMFGGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADCMFGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DCMFGGameMode.h" },
		{ "ModuleRelativePath", "DCMFGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCMFGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADCMFGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DCMFG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCMFGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCMFGGameMode_Statics::ClassParams = {
	&ADCMFGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCMFGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADCMFGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADCMFGGameMode()
{
	if (!Z_Registration_Info_UClass_ADCMFGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCMFGGameMode.OuterSingleton, Z_Construct_UClass_ADCMFGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADCMFGGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADCMFGGameMode);
ADCMFGGameMode::~ADCMFGGameMode() {}
// ********** End Class ADCMFGGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h__Script_DCMFG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADCMFGGameMode, ADCMFGGameMode::StaticClass, TEXT("ADCMFGGameMode"), &Z_Registration_Info_UClass_ADCMFGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCMFGGameMode), 950108214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h__Script_DCMFG_3408825340(TEXT("/Script/DCMFG"),
	Z_CompiledInDeferFile_FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h__Script_DCMFG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DCMFG_DCMFG_DCMFG_Source_DCMFG_DCMFGGameMode_h__Script_DCMFG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
