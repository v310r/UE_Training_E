// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CALCULATOR_CalculatorScript_generated_h
#error "CalculatorScript.generated.h already included, missing '#pragma once' in CalculatorScript.h"
#endif
#define CALCULATOR_CalculatorScript_generated_h

#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_SPARSE_DATA
#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResetButtonClicked); \
	DECLARE_FUNCTION(execOnDivideButtonClicked); \
	DECLARE_FUNCTION(execOnMultiplyButtonClicked); \
	DECLARE_FUNCTION(execOnMinusButtonClicked); \
	DECLARE_FUNCTION(execOnPlusButtonClicked);


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResetButtonClicked); \
	DECLARE_FUNCTION(execOnDivideButtonClicked); \
	DECLARE_FUNCTION(execOnMultiplyButtonClicked); \
	DECLARE_FUNCTION(execOnMinusButtonClicked); \
	DECLARE_FUNCTION(execOnPlusButtonClicked);


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCalculatorScript(); \
	friend struct Z_Construct_UClass_UCalculatorScript_Statics; \
public: \
	DECLARE_CLASS(UCalculatorScript, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Calculator"), NO_API) \
	DECLARE_SERIALIZER(UCalculatorScript)


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCalculatorScript(); \
	friend struct Z_Construct_UClass_UCalculatorScript_Statics; \
public: \
	DECLARE_CLASS(UCalculatorScript, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Calculator"), NO_API) \
	DECLARE_SERIALIZER(UCalculatorScript)


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCalculatorScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCalculatorScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCalculatorScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCalculatorScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCalculatorScript(UCalculatorScript&&); \
	NO_API UCalculatorScript(const UCalculatorScript&); \
public:


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCalculatorScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCalculatorScript(UCalculatorScript&&); \
	NO_API UCalculatorScript(const UCalculatorScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCalculatorScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCalculatorScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCalculatorScript)


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_16_PROLOG
#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_SPARSE_DATA \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_RPC_WRAPPERS \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_INCLASS \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_SPARSE_DATA \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_INCLASS_NO_PURE_DECLS \
	FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CALCULATOR_API UClass* StaticClass<class UCalculatorScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
