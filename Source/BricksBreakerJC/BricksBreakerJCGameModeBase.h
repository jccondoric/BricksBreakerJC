// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BricksBreakerJCGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKERJC_API ABricksBreakerJCGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		
public:
	// Sets default values for this actor's properties
	ABricksBreakerJCGameModeBase();
	int limiteCreate=0;

private:
	//The Inventory of this Actor
	UPROPERTY()
		class APaddle* Paddle;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
