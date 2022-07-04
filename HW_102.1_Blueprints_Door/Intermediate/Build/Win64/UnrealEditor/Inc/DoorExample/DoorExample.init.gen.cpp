// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorExample_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DoorExample;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DoorExample()
	{
		if (!Z_Registration_Info_UPackage__Script_DoorExample.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DoorExample",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4456AAD4,
				0x7D542559,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DoorExample.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DoorExample.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DoorExample(Z_Construct_UPackage__Script_DoorExample, TEXT("/Script/DoorExample"), Z_Registration_Info_UPackage__Script_DoorExample, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4456AAD4, 0x7D542559));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
