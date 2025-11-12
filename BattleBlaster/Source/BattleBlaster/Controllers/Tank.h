// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"

#include "EnhancedInputSubsystems.h"

#include "InputAction.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"

#include "Tank.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API ATank : public ABasePawn
{
	GENERATED_BODY()

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ATank();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Inputs")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = "Inputs")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Inputs")
	UInputAction* TurnAction;

	UPROPERTY(EditAnywhere, Category = "Inputs")
	UInputAction* FireAction;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, Category = "Player")
	float Speed = 300.0f;

	UPROPERTY(EditAnywhere, Category = "Player")
	float TurnRate = 100.0f;

	bool IsAlive = true;
	
	APlayerController* PlayerController;
	
	void MoveInput(const FInputActionValue& ActionValue);

	void TurnInput(const FInputActionValue& ActionValue);

	void HandleDestruction();
	
	void SetPlayerEnabled(bool Enabled);
};
