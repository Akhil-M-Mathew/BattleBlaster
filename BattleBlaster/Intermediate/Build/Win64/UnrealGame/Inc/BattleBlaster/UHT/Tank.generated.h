// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/Tank.h"

#ifdef BATTLEBLASTER_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define BATTLEBLASTER_Tank_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATank ********************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ATank_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_ATank_NoRegister(); \
public: \
	DECLARE_CLASS2(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_ATank_NoRegister) \
	DECLARE_SERIALIZER(ATank)


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATank(ATank&&) = delete; \
	ATank(const ATank&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank) \
	NO_API virtual ~ATank();


#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_22_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_25_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATank;

// ********** End Class ATank **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_Controllers_Tank_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
