// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CTest/PickUpActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpActor() {}

// Begin Cross Module References
CTEST_API UClass* Z_Construct_UClass_APickUpActor();
CTEST_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CTest();
// End Cross Module References

// Begin Class APickUpActor
void APickUpActor::StaticRegisterNativesAPickUpActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUpActor);
UClass* Z_Construct_UClass_APickUpActor_NoRegister()
{
	return APickUpActor::StaticClass();
}
struct Z_Construct_UClass_APickUpActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpActor.h" },
		{ "ModuleRelativePath", "PickUpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "PickUpActor" },
		{ "ModuleRelativePath", "PickUpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "PickUpActor" },
		{ "ModuleRelativePath", "PickUpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "PickUpActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUpActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpActor, Points), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpActor, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_PickupMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickUpActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpActor_Statics::ClassParams = {
	&APickUpActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APickUpActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickUpActor()
{
	if (!Z_Registration_Info_UClass_APickUpActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpActor.OuterSingleton, Z_Construct_UClass_APickUpActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickUpActor.OuterSingleton;
}
template<> CTEST_API UClass* StaticClass<APickUpActor>()
{
	return APickUpActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpActor);
APickUpActor::~APickUpActor() {}
// End Class APickUpActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_josn2_Source_CTest_PickUpActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUpActor, APickUpActor::StaticClass, TEXT("APickUpActor"), &Z_Registration_Info_UClass_APickUpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpActor), 164137505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_josn2_Source_CTest_PickUpActor_h_2849031578(TEXT("/Script/CTest"),
	Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_josn2_Source_CTest_PickUpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_josn2_Source_CTest_PickUpActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
