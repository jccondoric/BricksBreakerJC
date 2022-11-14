// Fill out your copyright notice in the Description page of Project Settings.


#include "PaddlePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "Paddle.h"
APaddlePlayerController::APaddlePlayerController()
{
}

void APaddlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("Move", this, &APaddlePlayerController::Move);

	InputComponent->BindAxis("MoveVer", this, &APaddlePlayerController::MoveVer);

}

void APaddlePlayerController::BeginPlay()
{
	//Array de Actores Camara no necesita un limite se va agrandando
	TArray<AActor*> CameraActors;
	//
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

}

void APaddlePlayerController::Move(float _AxisValue)
{

	auto MyPawn = Cast<APaddle>(GetPawn());

	if (MyPawn) {

		MyPawn->Move(_AxisValue);
	}
}

void APaddlePlayerController::MoveVer(float AxisValue)
{

	auto MyPawn = Cast<APaddle>(GetPawn());

	if (MyPawn) {

		MyPawn->MoveVer(AxisValue);
	}
}
