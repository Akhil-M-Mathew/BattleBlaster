// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleBlasterGameMode.h"

#include "Controllers/Tower.h"
#include "Kismet/GameplayStatics.h"
#include "BattleBlasterGameInstance.h"

void ABattleBlasterGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Towers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ATower::StaticClass(),Towers);
	TowerCount = Towers.Num();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		Tank = Cast<ATank>(PlayerPawn);
		if (!Tank)
		{
			UE_LOG(LogTemp, Error, TEXT("Tank is nullptr"));
		}
	}
	int32 LoopIndex = 0;
	while (LoopIndex < TowerCount)
	{
		if (AActor* TowerActor = Towers[LoopIndex])
		{
			if (ATower* Tower = Cast<ATower>(TowerActor))
			{
				Tower->Tank = Tank;
			}
		}
		LoopIndex++;
	}
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PlayerController)
	{
		ScreenMessageWidget = CreateWidget<UScreenMessage>(PlayerController, ScreenMessageClass);
		if (ScreenMessageWidget)
		{
			ScreenMessageWidget->AddToPlayerScreen();
			
			
		}
	}
	CountDownSeconds = CountDownDelay;
	ScreenMessageWidget->SetMessageText(FString::FromInt(CountDownSeconds));
	
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ABattleBlasterGameMode::OnCountdownTimerTimeout, 1.0f, true);
	
	
}

void ABattleBlasterGameMode::ActorDied(AActor* DeadActor)
{
	
	if (DeadActor == Tank)
	{
		//ATank Dead
		Tank->HandleDestruction();
		IsGameOver = true;
	} else
	{
		//ATower Dead
		if (ATower* Tower = Cast<ATower>(DeadActor))
		{
			Tower->HandleDestruction();
			TowerCount--;
			if (!TowerCount)
			{
				IsGameOver = true;
				IsVictory = true;
			}
		}
	}

	if (IsGameOver)
	{
		FString GameOverString = IsVictory ? "Victory!!" : "Defeat";
		ScreenMessageWidget->SetMessageText(GameOverString);
		ScreenMessageWidget->SetVisibility(ESlateVisibility::Visible);
		FTimerHandle GameOverTimerHandle;
		GetWorldTimerManager().SetTimer(GameOverTimerHandle, this, &ABattleBlasterGameMode::OnGameOverTimerTimeout, GameOverDelay, false);
	}
}

void ABattleBlasterGameMode::OnGameOverTimerTimeout()
{
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	if (GameInstance)
	{
		if (UBattleBlasterGameInstance* BattleBlasterGameInstance = Cast<UBattleBlasterGameInstance>(GameInstance))
		{
			if (IsVictory)
			{
				BattleBlasterGameInstance->LoadNextLevel();
			}else
			{
				BattleBlasterGameInstance->RestartCurrentLevel();
			}
		}
	}

	
}

void ABattleBlasterGameMode::OnCountdownTimerTimeout()
{
	CountDownSeconds--;
	if (CountDownSeconds > 0)
	{
		ScreenMessageWidget->SetMessageText(FString::FromInt(CountDownSeconds));
		
	} else if (CountDownSeconds == 0)
	{
		ScreenMessageWidget->SetMessageText("Get Ready!!");
		Tank->SetPlayerEnabled(true);
		
	}else
	{
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		ScreenMessageWidget->SetVisibility(ESlateVisibility::Hidden);
	}
	
}
