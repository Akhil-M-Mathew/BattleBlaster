// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/BasePawn.h"

#ifdef BATTLEBLASTER_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define BATTLEBLASTER_BasePawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePawn ****************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_ABasePawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_ABasePawn_NoRegister) \
	DECLARE_SERIALIZER(ABasePawn)


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePawn(ABasePawn&&) = delete; \
	ABasePawn(const ABasePawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn) \
	NO_API virtual ~ABasePawn();


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_15_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePawn;

// ********** End Class ABasePawn ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_Controllers_BasePawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
