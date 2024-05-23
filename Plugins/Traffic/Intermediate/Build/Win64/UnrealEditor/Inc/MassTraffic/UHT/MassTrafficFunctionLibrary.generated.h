// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMassSpawner;
class UObject;
class UPrimitiveComponent;
struct FMassTrafficPackedVehicleInstanceCustomData;
struct FMassTrafficVehicleInstanceCustomData;
#ifdef MASSTRAFFIC_MassTrafficFunctionLibrary_generated_h
#error "MassTrafficFunctionLibrary.generated.h already included, missing '#pragma once' in MassTrafficFunctionLibrary.h"
#endif
#define MASSTRAFFIC_MassTrafficFunctionLibrary_generated_h

#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_SPARSE_DATA
#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDespawnNonPlayerDrivenParkedVehicles); \
	DECLARE_FUNCTION(execRemoveVehiclesOverlappingPlayers); \
	DECLARE_FUNCTION(execGetPackedTrafficVehicleInstanceCustomData); \
	DECLARE_FUNCTION(execUnpackTrafficVehicleInstanceCustomData); \
	DECLARE_FUNCTION(execPackTrafficVehicleInstanceCustomData);


#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_ACCESSORS
#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMassTrafficFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficFunctionLibrary)


#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficFunctionLibrary(UMassTrafficFunctionLibrary&&); \
	NO_API UMassTrafficFunctionLibrary(const UMassTrafficFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficFunctionLibrary) \
	NO_API virtual ~UMassTrafficFunctionLibrary();


#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_12_PROLOG
#define FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_SPARSE_DATA \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_ACCESSORS \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_paull_OneDrive_Documents_PFE_JournalisteV2_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
