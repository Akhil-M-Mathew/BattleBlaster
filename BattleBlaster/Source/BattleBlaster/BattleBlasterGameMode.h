// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Controllers/Tank.h"
#include "Widget/ScreenMessage.h"

#include "BattleBlasterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API ABattleBlasterGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UScreenMessage> ScreenMessageClass;

	UScreenMessage* ScreenMessageWidget;

	UPROPERTY(EditAnywhere)
	float GameOverDelay = 3.0f;
	
	UPROPERTY(EditAnywhere)
	int32 CountDownDelay = 3;

	int32 CountDownSeconds;

	FTimerHandle CountdownTimerHandle;
	
	ATank* Tank;
	int32 TowerCount;
	
	bool IsGameOver = false;
	bool IsVictory = false;

	void ActorDied(AActor* DeadActor);

	void OnGameOverTimerTimeout();
	void OnCountdownTimerTimeout();
};
