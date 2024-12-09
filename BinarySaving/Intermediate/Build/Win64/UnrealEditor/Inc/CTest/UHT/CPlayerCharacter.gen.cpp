// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/Public/CPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayerCharacter() {}

// Begin Cross Module References
CTEST_API UClass* Z_Construct_UClass_ACPlayerCharacter();
CTEST_API UClass* Z_Construct_UClass_ACPlayerCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class ACPlayerCharacter
void ACPlayerCharacter::StaticRegisterNativesACPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlayerCharacter);
UClass* Z_Construct_UClass_ACPlayerCharacter_NoRegister()
{
	return ACPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ACPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/CPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlayerCharacter_Statics::ClassParams = {
	&ACPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ACPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlayerCharacter.OuterSingleton, Z_Construct_UClass_ACPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlayerCharacter.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<ACPlayerCharacter>()
{
	return ACPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayerCharacter);
ACPlayerCharacter::~ACPlayerCharacter() {}
// End Class ACPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlayerCharacter, ACPlayerCharacter::StaticClass, TEXT("ACPlayerCharacter"), &Z_Registration_Info_UClass_ACPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlayerCharacter), 796572080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CPlayerCharacter_h_3064588724(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
