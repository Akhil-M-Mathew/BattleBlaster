// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile/Projectile.h"

#ifdef BATTLEBLASTER_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define BATTLEBLASTER_Projectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AProjectile **************************************************************
#define FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


BATTLEBLASTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_AProjectile_NoRegister) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectile(AProjectile&&) = delete; \
	AProjectile(const AProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_15_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectile;

// ********** End Class AProjectile ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_Projectile_Projectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
