// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/Public/CGameSaveTransformComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameSaveTransformComponent() {}

// Begin Cross Module References
CTEST_API UClass* Z_Construct_UClass_ACGameSaveTransformComponent();
CTEST_API UClass* Z_Construct_UClass_ACGameSaveTransformComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class ACGameSaveTransformComponent
void ACGameSaveTransformComponent::StaticRegisterNativesACGameSaveTransformComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGameSaveTransformComponent);
UClass* Z_Construct_UClass_ACGameSaveTransformComponent_NoRegister()
{
	return ACGameSaveTransformComponent::StaticClass();
}
struct Z_Construct_UClass_ACGameSaveTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CGameSaveTransformComponent.h" },
		{ "ModuleRelativePath", "Public/CGameSaveTransformComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameSaveTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACGameSaveTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameSaveTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGameSaveTransformComponent_Statics::ClassParams = {
	&ACGameSaveTransformComponent::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameSaveTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGameSaveTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACGameSaveTransformComponent()
{
	if (!Z_Registration_Info_UClass_ACGameSaveTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGameSaveTransformComponent.OuterSingleton, Z_Construct_UClass_ACGameSaveTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACGameSaveTransformComponent.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<ACGameSaveTransformComponent>()
{
	return ACGameSaveTransformComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameSaveTransformComponent);
ACGameSaveTransformComponent::~ACGameSaveTransformComponent() {}
// End Class ACGameSaveTransformComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameSaveTransformComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameSaveTransformComponent, ACGameSaveTransformComponent::StaticClass, TEXT("ACGameSaveTransformComponent"), &Z_Registration_Info_UClass_ACGameSaveTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameSaveTransformComponent), 2137706726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameSaveTransformComponent_h_225149489(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameSaveTransformComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameSaveTransformComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
