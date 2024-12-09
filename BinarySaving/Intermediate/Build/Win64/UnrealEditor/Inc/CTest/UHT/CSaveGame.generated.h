// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CTEST_CSaveGame_generated_h
#error "CSaveGame.generated.h already included, missing '#pragma once' in CSaveGame.h"
#endif
#define CTEST_CSaveGame_generated_h

#define FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSaveGame(); \
	friend struct Z_Construct_UClass_UCSaveGame_Statics; \
public: \
	DECLARE_CLASS(UCSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CTest"), NO_API) \
	DECLARE_SERIALIZER(UCSaveGame)


#define FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCSaveGame(UCSaveGame&&); \
	UCSaveGame(const UCSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSaveGame) \
	NO_API virtual ~UCSaveGame();


#define FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_9_PROLOG
#define FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CTEST_API UClass* StaticClass<class UCSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s213812_Documents_GitHub_AdvGameEngineTask2_BinarySaving_Source_CTest_Public_CSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
