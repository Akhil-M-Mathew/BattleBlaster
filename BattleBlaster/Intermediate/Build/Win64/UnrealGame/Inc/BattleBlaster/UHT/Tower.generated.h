// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/Tower.h"

#ifdef BATTLEBLASTER_Tower_generated_h
#error "Tower.generated.h already included, missing '#pragma once' in Tower.h"
#endif
#define BATTLEBLASTER_Tower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATower *******************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ATower_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_ATower_NoRegister(); \
public: \
	DECLARE_CLASS2(ATower, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_ATower_NoRegister) \
	DECLARE_SERIALIZER(ATower)


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATower(ATower&&) = delete; \
	ATower(const ATower&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower) \
	NO_API virtual ~ATower();


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_15_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_18_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATower;

// ********** End Class ATower *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_Controllers_Tower_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
