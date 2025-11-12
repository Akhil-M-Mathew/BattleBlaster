// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle FireTimerHandle;
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InFireRange())
	{
		RotateTurret(Tank->GetActorLocation());
	}
	
}

void ATower::CheckFireCondition()
{
	// UE_LOG(LogTemp, Warning, TEXT("Turret Fired"));

	if (Tank->IsAlive && InFireRange())
	{
		Fire();
	}
}

bool ATower::InFireRange()
{
	bool Result = false;
	if (Tank)
	{
		float DistanceToTank = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
		Result = (DistanceToTank <= FireRange);
	}
	return Result;
}

void ATower::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}
