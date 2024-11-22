// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/Public/CGameSaveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameSaveComponent() {}

// Begin Cross Module References
CTEST_API UClass* Z_Construct_UClass_UCGameSaveComponent();
CTEST_API UClass* Z_Construct_UClass_UCGameSaveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class UCGameSaveComponent
void UCGameSaveComponent::StaticRegisterNativesUCGameSaveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCGameSaveComponent);
UClass* Z_Construct_UClass_UCGameSaveComponent_NoRegister()
{
	return UCGameSaveComponent::StaticClass();
}
struct Z_Construct_UClass_UCGameSaveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CGameSaveComponent.h" },
		{ "ModuleRelativePath", "Public/CGameSaveComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGameSaveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCGameSaveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCGameSaveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCGameSaveComponent_Statics::ClassParams = {
	&UCGameSaveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCGameSaveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCGameSaveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCGameSaveComponent()
{
	if (!Z_Registration_Info_UClass_UCGameSaveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCGameSaveComponent.OuterSingleton, Z_Construct_UClass_UCGameSaveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCGameSaveComponent.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<UCGameSaveComponent>()
{
	return UCGameSaveComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCGameSaveComponent);
UCGameSaveComponent::~UCGameSaveComponent() {}
// End Class UCGameSaveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CGameSaveComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCGameSaveComponent, UCGameSaveComponent::StaticClass, TEXT("UCGameSaveComponent"), &Z_Registration_Info_UClass_UCGameSaveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCGameSaveComponent), 11003266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CGameSaveComponent_h_1316951607(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CGameSaveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CGameSaveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
