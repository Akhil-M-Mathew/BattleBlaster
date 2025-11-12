// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/Controllers/Tower.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTower() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABasePawn();
BATTLEBLASTER_API UClass* Z_Construct_UClass_ATower();
BATTLEBLASTER_API UClass* Z_Construct_UClass_ATower_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATower *******************************************************************
void ATower::StaticRegisterNativesATower()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATower;
UClass* ATower::GetPrivateStaticClass()
{
	using TClass = ATower;
	if (!Z_Registration_Info_UClass_ATower.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Tower"),
			Z_Registration_Info_UClass_ATower.InnerSingleton,
			StaticRegisterNativesATower,
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
	return Z_Registration_Info_UClass_ATower.InnerSingleton;
}
UClass* Z_Construct_UClass_ATower_NoRegister()
{
	return ATower::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controllers/Tower.h" },
		{ "ModuleRelativePath", "Controllers/Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Controllers/Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Controllers/Tower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, FireRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRange_MetaData), NewProp_FireRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_FireRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATower_Statics::ClassParams = {
	&ATower::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams), Z_Construct_UClass_ATower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATower()
{
	if (!Z_Registration_Info_UClass_ATower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATower.OuterSingleton, Z_Construct_UClass_ATower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATower.OuterSingleton;
}
ATower::ATower() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATower);
ATower::~ATower() {}
// ********** End Class ATower *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATower, ATower::StaticClass, TEXT("ATower"), &Z_Registration_Info_UClass_ATower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATower), 2026096722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h__Script_BattleBlaster_4098266778(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
