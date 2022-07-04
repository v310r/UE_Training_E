// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DOOREXAMPLE_MyWrittenDoor_generated_h
#error "MyWrittenDoor.generated.h already included, missing '#pragma once' in MyWrittenDoor.h"
#endif
#define DOOREXAMPLE_MyWrittenDoor_generated_h

#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_SPARSE_DATA
#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDoorTogglingAnimate); \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDoorTogglingAnimate); \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyWrittenDoor(); \
	friend struct Z_Construct_UClass_AMyWrittenDoor_Statics; \
public: \
	DECLARE_CLASS(AMyWrittenDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorExample"), NO_API) \
	DECLARE_SERIALIZER(AMyWrittenDoor)


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyWrittenDoor(); \
	friend struct Z_Construct_UClass_AMyWrittenDoor_Statics; \
public: \
	DECLARE_CLASS(AMyWrittenDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorExample"), NO_API) \
	DECLARE_SERIALIZER(AMyWrittenDoor)


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyWrittenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyWrittenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWrittenDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWrittenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWrittenDoor(AMyWrittenDoor&&); \
	NO_API AMyWrittenDoor(const AMyWrittenDoor&); \
public:


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWrittenDoor(AMyWrittenDoor&&); \
	NO_API AMyWrittenDoor(const AMyWrittenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWrittenDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWrittenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyWrittenDoor)


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_13_PROLOG
#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_SPARSE_DATA \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_RPC_WRAPPERS \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_INCLASS \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_SPARSE_DATA \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_INCLASS_NO_PURE_DECLS \
	FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOOREXAMPLE_API UClass* StaticClass<class AMyWrittenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW_102_1_Blueprints_Door_Source_DoorExample_Private_MyWrittenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
