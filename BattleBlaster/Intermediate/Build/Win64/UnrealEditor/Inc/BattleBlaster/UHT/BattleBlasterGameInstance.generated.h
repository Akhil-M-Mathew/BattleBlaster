// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BattleBlasterGameInstance.h"

#ifdef BATTLEBLASTER_BattleBlasterGameInstance_generated_h
#error "BattleBlasterGameInstance.generated.h already included, missing '#pragma once' in BattleBlasterGameInstance.h"
#endif
#define BATTLEBLASTER_BattleBlasterGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBattleBlasterGameInstance ***********************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_UBattleBlasterGameInstance_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBattleBlasterGameInstance(); \
	friend struct Z_Construct_UClass_UBattleBlasterGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_UBattleBlasterGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBattleBlasterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_UBattleBlasterGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UBattleBlasterGameInstance)


#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBattleBlasterGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBattleBlasterGameInstance(UBattleBlasterGameInstance&&) = delete; \
	UBattleBlasterGameInstance(const UBattleBlasterGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleBlasterGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleBlasterGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleBlasterGameInstance) \
	NO_API virtual ~UBattleBlasterGameInstance();


#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_12_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBattleBlasterGameInstance;

// ********** End Class UBattleBlasterGameInstance *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
