// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UAudioComponent;
class UNiagaraSystem;
struct FVector;
#ifdef AGRPRO_AGR_SoundMaster_generated_h
#error "AGR_SoundMaster.generated.h already included, missing '#pragma once' in AGR_SoundMaster.h"
#endif
#define AGRPRO_AGR_SoundMaster_generated_h

#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_14_DELEGATE \
struct _Script_AGRPRO_eventCharacterMadeFootstepSound_Parms \
{ \
	FHitResult HitEvent; \
	float VolumeMulti; \
	UAudioComponent* Sound; \
	UNiagaraSystem* Particle; \
}; \
static inline void FCharacterMadeFootstepSound_DelegateWrapper(const FMulticastScriptDelegate& CharacterMadeFootstepSound, FHitResult HitEvent, float VolumeMulti, UAudioComponent* Sound, UNiagaraSystem* Particle) \
{ \
	_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms Parms; \
	Parms.HitEvent=HitEvent; \
	Parms.VolumeMulti=VolumeMulti; \
	Parms.Sound=Sound; \
	Parms.Particle=Particle; \
	CharacterMadeFootstepSound.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_SPARSE_DATA
#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_RPC_WRAPPERS \
	virtual void OverwritePickSurface_Implementation(TEnumAsByte<EPhysicalSurface> const& InSurface, TEnumAsByte<EPhysicalSurface>& OutSurface); \
	virtual FVector OverwriteParticleScale_Implementation() const; \
	virtual float OverwriteCalcVolume_Implementation() const; \
 \
	DECLARE_FUNCTION(execOverwritePickSurface); \
	DECLARE_FUNCTION(execOverwriteParticleScale); \
	DECLARE_FUNCTION(execOverwriteCalcVolume); \
	DECLARE_FUNCTION(execTestAllFeetForCollision); \
	DECLARE_FUNCTION(execFootstepEffect); \
	DECLARE_FUNCTION(execTryTraceFootstep);


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverwritePickSurface); \
	DECLARE_FUNCTION(execOverwriteParticleScale); \
	DECLARE_FUNCTION(execOverwriteCalcVolume); \
	DECLARE_FUNCTION(execTestAllFeetForCollision); \
	DECLARE_FUNCTION(execFootstepEffect); \
	DECLARE_FUNCTION(execTryTraceFootstep);


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_EVENT_PARMS \
	struct AGR_SoundMaster_eventOverwriteCalcVolume_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AGR_SoundMaster_eventOverwriteCalcVolume_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AGR_SoundMaster_eventOverwriteParticleScale_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AGR_SoundMaster_eventOverwriteParticleScale_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AGR_SoundMaster_eventOverwritePickSurface_Parms \
	{ \
		TEnumAsByte<EPhysicalSurface> InSurface; \
		TEnumAsByte<EPhysicalSurface> OutSurface; \
	};


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_CALLBACK_WRAPPERS
#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGR_SoundMaster(); \
	friend struct Z_Construct_UClass_UAGR_SoundMaster_Statics; \
public: \
	DECLARE_CLASS(UAGR_SoundMaster, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_SoundMaster)


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAGR_SoundMaster(); \
	friend struct Z_Construct_UClass_UAGR_SoundMaster_Statics; \
public: \
	DECLARE_CLASS(UAGR_SoundMaster, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_SoundMaster)


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGR_SoundMaster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGR_SoundMaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_SoundMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_SoundMaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_SoundMaster(UAGR_SoundMaster&&); \
	NO_API UAGR_SoundMaster(const UAGR_SoundMaster&); \
public:


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_SoundMaster(UAGR_SoundMaster&&); \
	NO_API UAGR_SoundMaster(const UAGR_SoundMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_SoundMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_SoundMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGR_SoundMaster)


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_PRIVATE_PROPERTY_OFFSET
#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_16_PROLOG \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_EVENT_PARMS


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_PRIVATE_PROPERTY_OFFSET \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_SPARSE_DATA \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_RPC_WRAPPERS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_CALLBACK_WRAPPERS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_INCLASS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_PRIVATE_PROPERTY_OFFSET \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_SPARSE_DATA \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_CALLBACK_WRAPPERS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_INCLASS_NO_PURE_DECLS \
	basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGR_SoundMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID basic5_Teacher_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_SoundMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
