// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CPlayerCharacter.h"
//#include "CSaveGame.h"
#include "Misc/Paths.h"
#include "EngineUtils.h"
#include "CGameSaveComponent.h"
//#include "CGameSaveTransformComponent.h"

void ACGameModeBase::BeginPlay() {
	Super::BeginPlay();

	LoadJson("JsonSave");
	//LoadJson("transform_data");


	//USaveGame* loadsave = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER"), 0);
	//UCSaveGame* mySave = Cast<UCSaveGame>(loadsave);

	//if (IsValid(mySave)) {
	//	// Copy HighScore
	//	Highscore = mySave->Highscore;

	//	if (!mySave->SaveTransformByName.IsEmpty())
	//	{
	//		for (TObjectIterator<UCGameSaveComponent> savedTransforms; savedTransforms; ++savedTransforms)
	//		{
	//			// Don't load if object is not from a game/PIE world
	//			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }
	//			EWorldType::Type componentWorldType = (*savedTransforms)->GetWorld()->WorldType;
	//			if (!(componentWorldType == EWorldType::PIE || componentWorldType == EWorldType::Game)) { continue; }

	//			AActor* saveOwner = (*savedTransforms)->GetOwner();
	//			FString ownerName = saveOwner->GetName();
	//			FTransform* savedTransform = mySave->SaveTransformByName.Find(ownerName);
	//			if (savedTransform != nullptr)
	//			{
	//				(*savedTransforms)->LoadTransform(mySave->SaveTransformByName[saveOwner->GetName()]);
	//			}
	//		}
	//	}

	//	// Set Player To the Last Save Player Pos
	//	LastPlayerSavedLocation = mySave->LastPlayerLocation;
	//}


}

void ACGameModeBase::Tick(float DeltaSeconds) {
	
}

void ACGameModeBase::EndPlay(const EEndPlayReason::Type EndPlayReason) {

	SaveGame("JsonSave");

	//// Create Copy Of Save Data
	//USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UCSaveGame::StaticClass());

	//UCSaveGame* mySave = Cast<UCSaveGame>(newSave);
	//if (IsValid(mySave)) {
	//	// Make The Best Hight Score To the Save data
	//	mySave->Highscore = Highscore;

	//	 //Saving the last Pos of the Player

	//	for (TActorIterator<ACPlayerCharacter> player(GetWorld()); player; ++player)
	//	{
	//		// Skip Invalid players
	//		if (!IsValid(*player)) { continue; }
	//		mySave->LastPlayerLocation = player->GetActorLocation();
	//		break;
	//	}

	//	for (TObjectIterator<UCGameSaveComponent> savedTransforms; savedTransforms; ++savedTransforms)
	//	{
	//		// Skip invalid objects
	//		if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }
	//		// Don't load if object is not from a game world
	//		AActor* saveOwner = savedTransforms->GetOwner();
	//		EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;
	//		if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

	//		// Associate name with transform information
	//		FString ownerName = saveOwner->GetName();
	//		FTransform newSaveTransform;
	//		savedTransforms->SaveTransform(newSaveTransform);

	//		mySave->SaveTransformByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
	//	}
	//	// Save Slot To Where Single Player is the name and 0 is the slot index
	//	UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0);
	//}
	// Class the Endplay Super Class
	Super::EndPlay(EndPlayReason);
}

void ACGameModeBase::ReportScore(int newScore) {
	if (newScore > Highscore) {
		Highscore = newScore;
	}
}

FVector ACGameModeBase::GetLastSavedPlayerLocation() {
	return LastPlayerSavedLocation;
}

bool ACGameModeBase::SaveGameToJSONFile(UCSaveGame* saveGameObject, const FString& saveName)
{
	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());

	saveJson->SetNumberField(TEXT("Highscore"), saveGameObject->Highscore);
	saveJson->SetStringField(TEXT("LastPlayerLocation"), saveGameObject->LastPlayerLocation.ToString());

	TArray<TSharedPtr<FJsonValue>> jsonTransformValues;
	for (auto& transformPair : saveGameObject->SaveTransformByName)
	{
		TSharedPtr<FJsonObject> saveTransform = MakeShareable(new FJsonObject());

		saveTransform->SetStringField(TEXT("Name"), transformPair.Key);
		saveTransform->SetStringField(TEXT("Transform"), transformPair.Value.ToString());

		jsonTransformValues.Add(MakeShareable(new FJsonValueObject(saveTransform)));
	}
	saveJson->SetArrayField(TEXT("SaveTransformsByName"), jsonTransformValues);


	FString contents;
	TSharedRef<TJsonWriter<>> saveWriter = TJsonWriterFactory<>::Create(&contents);
	FJsonSerializer::Serialize(saveJson.ToSharedRef(), saveWriter);


	const FString saveGamePath = CreateSaveFilePath(saveName);
	bool saveSuccess = FFileHelper::SaveStringToFile(contents, *saveGamePath);


	return saveSuccess;

}

FString ACGameModeBase::CreateSaveFilePath(const FString& saveName)
{
	return FPaths::ProjectSavedDir() + "SaveJson/" + saveName + TEXT(".json.sav");
}

USaveGame* ACGameModeBase::LoadGameFromJsonFile(const FString& saveName)
{
	const FString saveGamePath = CreateSaveFilePath(saveName);

	FString contents;
	bool loadSuccess = FFileHelper::LoadFileToString(contents, * saveGamePath);

	if (!loadSuccess) { return nullptr; }
	UCSaveGame* saveGameInstance = Cast<UCSaveGame>(UGameplayStatics::CreateSaveGameObject(UCSaveGame::StaticClass()));
	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());

	TSharedRef<TJsonReader<>> saveReader = TJsonReaderFactory<>::Create(contents);
	if (FJsonSerializer::Deserialize(saveReader, saveJson) && saveJson.IsValid())
	{
		saveJson->TryGetNumberField(TEXT("Highscore"), saveGameInstance->Highscore);
		FString lastPlayerLocation;
		saveJson->TryGetStringField(TEXT("LastPlayerLocation"), lastPlayerLocation);
		saveGameInstance->LastPlayerLocation.InitFromString(lastPlayerLocation);

		const TArray<TSharedPtr<FJsonValue>>* saveTransforms;
		bool hasSaveTransforms = saveJson->TryGetArrayField(TEXT("SaveTransformsByName"), saveTransforms);
		if (hasSaveTransforms)
		{
			for (auto& transformPair : *saveTransforms)
			{
				TSharedPtr<FJsonObject> saveTransform = transformPair->AsObject();
				FString transformName;
				saveTransform->TryGetStringField(TEXT("Name"), transformName);
				FString transformValue;
				saveTransform->TryGetStringField(TEXT("Transform"), transformValue);
				FTransform transformParsed;
				transformParsed.InitFromString(transformValue);

				saveGameInstance->SaveTransformByName.Add(transformName, transformParsed);
			}
		}
	}
	return saveGameInstance;
	//return Cast<UCSaveGame>(UGameplayStatics::CreateSaveGameObject(UCSaveGame::StaticClass()));
}

bool ACGameModeBase::SaveGame(const FString& saveName)
{

	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UCSaveGame::StaticClass());

	UCSaveGame* mySave = Cast<UCSaveGame>(newSave);


	if (IsValid(mySave))
	{

		mySave->Highscore = Highscore;

		for (TActorIterator<ACPlayerCharacter> player(GetWorld()); player; ++player)
		{

			if (!IsValid(*player)) { return false; }
			mySave->LastPlayerLocation = player->GetActorLocation();
			break;
		}

		for (TObjectIterator<UCGameSaveComponent> savedTransforms; savedTransforms; ++savedTransforms)
		{

			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }
			AActor* saveOwner = savedTransforms->GetOwner();
			ensure(IsValid(saveOwner));


			EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;
			if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

			FString ownerName = saveOwner->GetActorLabel();
			FTransform newSaveTransform;
			savedTransforms->SaveTransform(newSaveTransform);

			mySave->SaveTransformByName.FindOrAdd(saveOwner->GetActorLabel(), newSaveTransform);
		}

		if (UseJSONSaveGame) { SaveGameToJSONFile(mySave, saveName); }
		else { UGameplayStatics::SaveGameToSlot(mySave, saveName, 0); }
	}

	return true;
}

UCSaveGame* ACGameModeBase::LoadJson(const FString& loadName)
{
	UCSaveGame* mySave = nullptr;
	// Intermediate save data object as loaded from file
	USaveGame* loadSave = nullptr;

	if (UseJSONSaveGame) { loadSave = LoadGameFromJsonFile(loadName); }
	else { loadSave = UGameplayStatics::LoadGameFromSlot(loadName, 0); }

	mySave = Cast<UCSaveGame>(loadSave);

	/*USaveGame* loadsave = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER"), 0);
	UCSaveGame* mySave = Cast<UCSaveGame>(loadsave);*/

	if (IsValid(mySave)) {
		// Copy HighScore
		Highscore = mySave->Highscore;

		// Set Player To the Last Save Player Pos
		LastPlayerSavedLocation = mySave->LastPlayerLocation;

		if (!mySave->SaveTransformByName.IsEmpty())
		{
			for (TObjectIterator<UCGameSaveComponent> savedTransforms; savedTransforms; ++savedTransforms)
			{
				// Don't load if object is not from a game/PIE world
				if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }
				EWorldType::Type componentWorldType = (*savedTransforms)->GetWorld()->WorldType;
				if (!(componentWorldType == EWorldType::PIE || componentWorldType == EWorldType::Game)) { continue; }

				AActor* saveOwner = (*savedTransforms)->GetOwner();
				FString ownerName = saveOwner->GetActorLabel();
				FTransform* savedTransform = mySave->SaveTransformByName.Find(ownerName);
				if (savedTransform != nullptr)
				{
					(*savedTransforms)->LoadTransform(mySave->SaveTransformByName[saveOwner->GetActorLabel()]);
				}
			}
		}
	}

	return mySave;
}
