// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CSaveGame.h"
#include "CGameModeBase.generated.h"


UCLASS()
class CTEST_API ACGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	float TimeElapsed = 0.0f;
	int Highscore = 0;

public:
	//// Stores the player location for saving
	FVector LastPlayerSavedLocation = FVector::ZeroVector;


	//// Run On the Start Of the Level
    virtual void BeginPlay() override;

	//// Run Evey Tick of a Second
	virtual void Tick(float DeltaSeconds) override;

	//// Ends the Game When Run
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void ReportScore(int newScore);


	// Returns a copy of the player last saved location
	FVector GetLastSavedPlayerLocation();

	// saving the data to a json file
	bool SaveGameToJSONFile(UCSaveGame* saveGameObject, const FString& saveName);


	// creating file path
	FString CreateSaveFilePath(const FString& saveName);

	// loading rhe date from a json file
	USaveGame* LoadGameFromJsonFile(const FString& saveName);

	bool SaveGame(const FString& saveName);

	UCSaveGame* LoadJson(const FString& loadName);

protected:
	UPROPERTY(EditDefaultsOnly)
	bool UseJSONSaveGame = true;
};
