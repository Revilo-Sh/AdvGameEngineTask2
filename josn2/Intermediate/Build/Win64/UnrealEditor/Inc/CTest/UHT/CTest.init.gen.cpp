// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CTest()
	{
		if (!Z_Registration_Info_UPackage__Script_CTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2D210CAE,
				0xBE38FA49,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CTest(Z_Construct_UPackage__Script_CTest, TEXT("/Script/CTest"), Z_Registration_Info_UPackage__Script_CTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2D210CAE, 0xBE38FA49));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
