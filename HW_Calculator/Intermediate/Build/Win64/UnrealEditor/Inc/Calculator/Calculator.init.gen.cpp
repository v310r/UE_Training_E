// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculator_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Calculator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Calculator()
	{
		if (!Z_Registration_Info_UPackage__Script_Calculator.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Calculator",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x570299A3,
				0x56FC82F8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Calculator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Calculator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Calculator(Z_Construct_UPackage__Script_Calculator, TEXT("/Script/Calculator"), Z_Registration_Info_UPackage__Script_Calculator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x570299A3, 0x56FC82F8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
