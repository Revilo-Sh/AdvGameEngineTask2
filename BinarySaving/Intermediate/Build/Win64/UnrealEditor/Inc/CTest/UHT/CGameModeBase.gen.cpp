// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/Public/CGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameModeBase() {}

// Begin Cross Module References
CTEST_API UClass* Z_Construct_UClass_ACGameModeBase();
CTEST_API UClass* Z_Construct_UClass_ACGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class ACGameModeBase
void ACGameModeBase::StaticRegisterNativesACGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGameModeBase);
UClass* Z_Construct_UClass_ACGameModeBase_NoRegister()
{
	return ACGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseJSONSaveGame_MetaData[] = {
		{ "Category", "CGameModeBase" },
		{ "ModuleRelativePath", "Public/CGameModeBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseJSONSaveGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseJSONSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACGameModeBase_Statics::NewProp_UseJSONSaveGame_SetBit(void* Obj)
{
	((ACGameModeBase*)Obj)->UseJSONSaveGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACGameModeBase_Statics::NewProp_UseJSONSaveGame = { "UseJSONSaveGame", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACGameModeBase), &Z_Construct_UClass_ACGameModeBase_Statics::NewProp_UseJSONSaveGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseJSONSaveGame_MetaData), NewProp_UseJSONSaveGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGameModeBase_Statics::NewProp_UseJSONSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGameModeBase_Statics::ClassParams = {
	&ACGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACGameModeBase()
{
	if (!Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton, Z_Construct_UClass_ACGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<ACGameModeBase>()
{
	return ACGameModeBase::StaticClass();
}
ACGameModeBase::ACGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameModeBase);
ACGameModeBase::~ACGameModeBase() {}
// End Class ACGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACGameModeBase, ACGameModeBase::StaticClass, TEXT("ACGameModeBase"), &Z_Registration_Info_UClass_ACGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameModeBase), 2868540234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameModeBase_h_2089554102(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
