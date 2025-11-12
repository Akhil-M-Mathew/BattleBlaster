// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/BattleBlasterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBattleBlasterGameMode() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode();
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister();
BATTLEBLASTER_API UClass* Z_Construct_UClass_UScreenMessage_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABattleBlasterGameMode ***************************************************
void ABattleBlasterGameMode::StaticRegisterNativesABattleBlasterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABattleBlasterGameMode;
UClass* ABattleBlasterGameMode::GetPrivateStaticClass()
{
	using TClass = ABattleBlasterGameMode;
	if (!Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BattleBlasterGameMode"),
			Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton,
			StaticRegisterNativesABattleBlasterGameMode,
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
	return Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister()
{
	return ABattleBlasterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABattleBlasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BattleBlasterGameMode.h" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMessageClass_MetaData[] = {
		{ "Category", "BattleBlasterGameMode" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverDelay_MetaData[] = {
		{ "Category", "BattleBlasterGameMode" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountDownDelay_MetaData[] = {
		{ "Category", "BattleBlasterGameMode" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScreenMessageClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameOverDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountDownDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleBlasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_ScreenMessageClass = { "ScreenMessageClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleBlasterGameMode, ScreenMessageClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UScreenMessage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMessageClass_MetaData), NewProp_ScreenMessageClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_GameOverDelay = { "GameOverDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleBlasterGameMode, GameOverDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverDelay_MetaData), NewProp_GameOverDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_CountDownDelay = { "CountDownDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleBlasterGameMode, CountDownDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountDownDelay_MetaData), NewProp_CountDownDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_ScreenMessageClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_GameOverDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_CountDownDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABattleBlasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::ClassParams = {
	&ABattleBlasterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleBlasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleBlasterGameMode()
{
	if (!Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton, Z_Construct_UClass_ABattleBlasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton;
}
ABattleBlasterGameMode::ABattleBlasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleBlasterGameMode);
ABattleBlasterGameMode::~ABattleBlasterGameMode() {}
// ********** End Class ABattleBlasterGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleBlasterGameMode, ABattleBlasterGameMode::StaticClass, TEXT("ABattleBlasterGameMode"), &Z_Registration_Info_UClass_ABattleBlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleBlasterGameMode), 34959575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_1725615095(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
