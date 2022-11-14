// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PaddlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKERJC_API APaddlePlayerController : public APlayerController
{
	GENERATED_BODY()
		APaddlePlayerController();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;

	void Move(float _AxisValue);

	void MoveVer(float AxisValue);

};
