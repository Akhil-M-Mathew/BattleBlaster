// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"

ATank::ATank()
{
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArmComp->SetupAttachment(CapsuleComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController> (Controller);
	if (PlayerController)
	{		
		if (ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
			{
				Subsystem->AddMappingContext(DefaultMappingContext,0);
				UE_LOG(LogTemp, Warning, TEXT("PlayerController is Mapped with Input Mapping Context"));
			}
			
		}
	}
	SetPlayerEnabled(false);
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		FHitResult HitResult;
		PlayerController->GetHitResultUnderCursor(ECC_Visibility,false,HitResult);
		RotateTurret(HitResult.ImpactPoint);
	}

}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Move Input
		EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATank::MoveInput);

		//Turn Input
		EIC->BindAction(TurnAction, ETriggerEvent::Triggered, this, &ATank::TurnInput);

		//Fire Input
		EIC -> BindAction(FireAction, ETriggerEvent::Started, this, &ABasePawn::Fire);
	}

}

void ATank::MoveInput(const FInputActionValue& ActionValue)
{
	float inputValue = ActionValue.Get<float>();
	FVector DeltaLocation = FVector(0.0f, 0.0f, 0.0f);
	DeltaLocation.X = Speed * inputValue * UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	AddActorLocalOffset(DeltaLocation, true);
}

void ATank::TurnInput(const FInputActionValue& ActionValue)
{
	float inputValue = ActionValue.Get<float>();
	FRotator DeltaRotation = FRotator(0.0f, 0.0f, 0.0f);
	DeltaRotation.Yaw = TurnRate * inputValue * UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	AddActorLocalRotation(DeltaRotation,true);
}

void ATank::HandleDestruction()
{
	Super::HandleDestruction();
	UE_LOG(LogTemp, Log, TEXT("HandleDestruction() from Tank"));
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	SetPlayerEnabled(false);
	IsAlive = false;
}

void ATank::SetPlayerEnabled(bool Enabled)
{
	if (PlayerController)
	{
		UE_LOG(LogTemp, Log, TEXT("SetPlayerEnabled() is %d"), Enabled);
		if (Enabled)
		{
			EnableInput(PlayerController);
		} else
		{
			DisableInput(PlayerController);
		}
		PlayerController->bShowMouseCursor = Enabled;
	}
}
