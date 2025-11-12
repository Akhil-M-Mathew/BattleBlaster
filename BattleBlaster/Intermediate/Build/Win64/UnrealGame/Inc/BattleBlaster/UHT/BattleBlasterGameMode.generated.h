// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BattleBlasterGameMode.h"

#ifdef BATTLEBLASTER_BattleBlasterGameMode_generated_h
#error "BattleBlasterGameMode.generated.h already included, missing '#pragma once' in BattleBlasterGameMode.h"
#endif
#define BATTLEBLASTER_BattleBlasterGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABattleBlasterGameMode ***************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattleBlasterGameMode(); \
	friend struct Z_Construct_UClass_ABattleBlasterGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABattleBlasterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_ABattleBlasterGameMode_NoRegister) \
	DECLARE_SERIALIZER(ABattleBlasterGameMode)


#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABattleBlasterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABattleBlasterGameMode(ABattleBlasterGameMode&&) = delete; \
	ABattleBlasterGameMode(const ABattleBlasterGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleBlasterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleBlasterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattleBlasterGameMode) \
	NO_API virtual ~ABattleBlasterGameMode();


#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_16_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_19_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABattleBlasterGameMode;

// ********** End Class ABattleBlasterGameMode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
