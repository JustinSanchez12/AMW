// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCamera.generated.h"

UCLASS()
class ANITA_API AGameCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//For Getting Player 1 Transform Positions
    UPROPERTY(EditAnywhere)
	AActor* Player1;
	//For Getting Player 2 Transform Positions
	UPROPERTY(EditAnywhere)
	AActor* Player2;


};
