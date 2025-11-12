// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/ScreenMessage.h"

#ifdef BATTLEBLASTER_ScreenMessage_generated_h
#error "ScreenMessage.generated.h already included, missing '#pragma once' in ScreenMessage.h"
#endif
#define BATTLEBLASTER_ScreenMessage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScreenMessage ***********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_UScreenMessage_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenMessage(); \
	friend struct Z_Construct_UClass_UScreenMessage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_UScreenMessage_NoRegister(); \
public: \
	DECLARE_CLASS2(UScreenMessage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_UScreenMessage_NoRegister) \
	DECLARE_SERIALIZER(UScreenMessage)


#define FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreenMessage(UScreenMessage&&) = delete; \
	UScreenMessage(const UScreenMessage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenMessage) \
	NO_API virtual ~UScreenMessage();


#define FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_15_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_18_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreenMessage;

// ********** End Class UScreenMessage *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_Widget_ScreenMessage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
