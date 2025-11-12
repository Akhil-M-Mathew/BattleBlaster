// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleBlasterGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UBattleBlasterGameInstance::LoadNextLevel()
{
	if (CurrentLevelIndex < LastLevelIndex)
	{
		ChangeLevel(CurrentLevelIndex+1);		
	}else
	{
		RestartGame();
	}
	
}

void UBattleBlasterGameInstance::RestartCurrentLevel()
{
	ChangeLevel(CurrentLevelIndex);
}

void UBattleBlasterGameInstance::RestartGame()
{
	ChangeLevel(1);
}

void UBattleBlasterGameInstance::ChangeLevel(int32 Index)
{
	if (Index > 0 && Index <= LastLevelIndex)
	{

		CurrentLevelIndex = Index;

		FString LevelName = FString :: Printf(TEXT("Level_%d"), CurrentLevelIndex);
		UE_LOG(LogTemp, Warning, TEXT("Loading %s"), *LevelName);
		UGameplayStatics::OpenLevel(GetWorld(), *LevelName);
	}
}
