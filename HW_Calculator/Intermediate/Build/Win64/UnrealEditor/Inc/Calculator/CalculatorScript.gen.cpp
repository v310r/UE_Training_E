// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calculator/Private/CalculatorScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculatorScript() {}
// Cross Module References
	CALCULATOR_API UClass* Z_Construct_UClass_UCalculatorScript_NoRegister();
	CALCULATOR_API UClass* Z_Construct_UClass_UCalculatorScript();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Calculator();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCalculatorScript::execOnResetButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalculatorScript::execOnDivideButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDivideButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalculatorScript::execOnMultiplyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMultiplyButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalculatorScript::execOnMinusButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMinusButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalculatorScript::execOnPlusButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlusButtonClicked();
		P_NATIVE_END;
	}
	void UCalculatorScript::StaticRegisterNativesUCalculatorScript()
	{
		UClass* Class = UCalculatorScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDivideButtonClicked", &UCalculatorScript::execOnDivideButtonClicked },
			{ "OnMinusButtonClicked", &UCalculatorScript::execOnMinusButtonClicked },
			{ "OnMultiplyButtonClicked", &UCalculatorScript::execOnMultiplyButtonClicked },
			{ "OnPlusButtonClicked", &UCalculatorScript::execOnPlusButtonClicked },
			{ "OnResetButtonClicked", &UCalculatorScript::execOnResetButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalculatorScript, nullptr, "OnDivideButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalculatorScript, nullptr, "OnMinusButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalculatorScript, nullptr, "OnMultiplyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalculatorScript, nullptr, "OnPlusButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalculatorScript, nullptr, "OnResetButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalculatorScript);
	UClass* Z_Construct_UClass_UCalculatorScript_NoRegister()
	{
		return UCalculatorScript::StaticClass();
	}
	struct Z_Construct_UClass_UCalculatorScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnswerValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnswerValueLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlusButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlusButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinusButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinusButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplyButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivideButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DivideButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalculatorScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Calculator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCalculatorScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCalculatorScript_OnDivideButtonClicked, "OnDivideButtonClicked" }, // 3434097980
		{ &Z_Construct_UFunction_UCalculatorScript_OnMinusButtonClicked, "OnMinusButtonClicked" }, // 517690288
		{ &Z_Construct_UFunction_UCalculatorScript_OnMultiplyButtonClicked, "OnMultiplyButtonClicked" }, // 2354628621
		{ &Z_Construct_UFunction_UCalculatorScript_OnPlusButtonClicked, "OnPlusButtonClicked" }, // 930550935
		{ &Z_Construct_UFunction_UCalculatorScript_OnResetButtonClicked, "OnResetButtonClicked" }, // 2452772771
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CalculatorScript.h" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_AnswerValueLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_AnswerValueLabel = { "AnswerValueLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, AnswerValueLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_AnswerValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_AnswerValueLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_PlusButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_PlusButton = { "PlusButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, PlusButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_PlusButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_PlusButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MinusButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MinusButton = { "MinusButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, MinusButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MinusButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MinusButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MultiplyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MultiplyButton = { "MultiplyButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, MultiplyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MultiplyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MultiplyButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_DivideButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_DivideButton = { "DivideButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, DivideButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_DivideButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_DivideButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_InputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_InputBox = { "InputBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, InputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_InputBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_InputBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculatorScript_Statics::NewProp_ResetButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CalculatorScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCalculatorScript_Statics::NewProp_ResetButton = { "ResetButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCalculatorScript, ResetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_ResetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::NewProp_ResetButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCalculatorScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_AnswerValueLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_PlusButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MinusButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_MultiplyButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_DivideButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_InputBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalculatorScript_Statics::NewProp_ResetButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalculatorScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalculatorScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalculatorScript_Statics::ClassParams = {
		&UCalculatorScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCalculatorScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCalculatorScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCalculatorScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCalculatorScript()
	{
		if (!Z_Registration_Info_UClass_UCalculatorScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalculatorScript.OuterSingleton, Z_Construct_UClass_UCalculatorScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalculatorScript.OuterSingleton;
	}
	template<> CALCULATOR_API UClass* StaticClass<UCalculatorScript>()
	{
		return UCalculatorScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalculatorScript);
	struct Z_CompiledInDeferFile_FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCalculatorScript, UCalculatorScript::StaticClass, TEXT("UCalculatorScript"), &Z_Registration_Info_UClass_UCalculatorScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalculatorScript), 2617310752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_1682127247(TEXT("/Script/Calculator"),
		Z_CompiledInDeferFile_FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW_Calculator_Source_Calculator_Private_CalculatorScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
