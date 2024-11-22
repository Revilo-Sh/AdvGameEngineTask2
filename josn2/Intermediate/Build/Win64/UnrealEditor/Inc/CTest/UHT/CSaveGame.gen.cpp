// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/Public/CSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CTEST_API UClass* Z_Construct_UClass_UCSaveGame();
CTEST_API UClass* Z_Construct_UClass_UCSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class UCSaveGame
void UCSaveGame::StaticRegisterNativesUCSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSaveGame);
UClass* Z_Construct_UClass_UCSaveGame_NoRegister()
{
	return UCSaveGame::StaticClass();
}
struct Z_Construct_UClass_UCSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CSaveGame.h" },
		{ "ModuleRelativePath", "Public/CSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Highscore_MetaData[] = {
		{ "ModuleRelativePath", "Public/CSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayerLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add A baribale for storing the players last Pos\n" },
#endif
		{ "ModuleRelativePath", "Public/CSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add A baribale for storing the players last Pos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTransformByName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of Transform\n" },
#endif
		{ "ModuleRelativePath", "Public/CSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of Transform" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Highscore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPlayerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveTransformByName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTransformByName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveTransformByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSaveGame_Statics::NewProp_Highscore = { "Highscore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSaveGame, Highscore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Highscore_MetaData), NewProp_Highscore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSaveGame_Statics::NewProp_LastPlayerLocation = { "LastPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSaveGame, LastPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayerLocation_MetaData), NewProp_LastPlayerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName_ValueProp = { "SaveTransformByName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName_Key_KeyProp = { "SaveTransformByName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName = { "SaveTransformByName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSaveGame, SaveTransformByName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTransformByName_MetaData), NewProp_SaveTransformByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSaveGame_Statics::NewProp_Highscore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSaveGame_Statics::NewProp_LastPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSaveGame_Statics::NewProp_SaveTransformByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSaveGame_Statics::ClassParams = {
	&UCSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCSaveGame()
{
	if (!Z_Registration_Info_UClass_UCSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSaveGame.OuterSingleton, Z_Construct_UClass_UCSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCSaveGame.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<UCSaveGame>()
{
	return UCSaveGame::StaticClass();
}
UCSaveGame::UCSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCSaveGame);
UCSaveGame::~UCSaveGame() {}
// End Class UCSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCSaveGame, UCSaveGame::StaticClass, TEXT("UCSaveGame"), &Z_Registration_Info_UClass_UCSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSaveGame), 2646523488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CSaveGame_h_2117255211(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_JsonUnreal_josn_josn2_Source_CTest_Public_CSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
