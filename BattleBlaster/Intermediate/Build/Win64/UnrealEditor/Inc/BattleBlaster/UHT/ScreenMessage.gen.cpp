// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/Widget/ScreenMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScreenMessage() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_UScreenMessage();
BATTLEBLASTER_API UClass* Z_Construct_UClass_UScreenMessage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UScreenMessage ***********************************************************
void UScreenMessage::StaticRegisterNativesUScreenMessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UScreenMessage;
UClass* UScreenMessage::GetPrivateStaticClass()
{
	using TClass = UScreenMessage;
	if (!Z_Registration_Info_UClass_UScreenMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScreenMessage"),
			Z_Registration_Info_UClass_UScreenMessage.InnerSingleton,
			StaticRegisterNativesUScreenMessage,
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
	return Z_Registration_Info_UClass_UScreenMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_UScreenMessage_NoRegister()
{
	return UScreenMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScreenMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/ScreenMessage.h" },
		{ "ModuleRelativePath", "Widget/ScreenMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenMessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/ScreenMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenMessage_Statics::NewProp_MessageTextBlock = { "MessageTextBlock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMessage, MessageTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageTextBlock_MetaData), NewProp_MessageTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMessage_Statics::NewProp_MessageTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreenMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenMessage_Statics::ClassParams = {
	&UScreenMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScreenMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMessage_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenMessage()
{
	if (!Z_Registration_Info_UClass_UScreenMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenMessage.OuterSingleton, Z_Construct_UClass_UScreenMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenMessage.OuterSingleton;
}
UScreenMessage::UScreenMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenMessage);
UScreenMessage::~UScreenMessage() {}
// ********** End Class UScreenMessage *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenMessage, UScreenMessage::StaticClass, TEXT("UScreenMessage"), &Z_Registration_Info_UClass_UScreenMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenMessage), 1118162247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h__Script_BattleBlaster_1374300475(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
