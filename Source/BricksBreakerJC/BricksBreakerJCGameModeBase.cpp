// Copyright Epic Games, Inc. All Rights Reserved.


#include "BricksBreakerJCGameModeBase.h"

#include "Paddle.h"

ABricksBreakerJCGameModeBase::ABricksBreakerJCGameModeBase()
{

	PrimaryActorTick.bCanEverTick = true;

}

void ABricksBreakerJCGameModeBase::BeginPlay()
{

	Super::BeginPlay();
	limiteCreate = 2;
	//Create 4 Inventory
	for (int i = 0; i <= 4; i++)
	{
		int c = 0;
		c = c + i;
		if (c <= limiteCreate - 1) {
			APaddle* SpawnedPaddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
		}
	}
	
}

void ABricksBreakerJCGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
