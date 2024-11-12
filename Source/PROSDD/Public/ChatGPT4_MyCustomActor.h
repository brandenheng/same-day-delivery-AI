// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ChatGPT4_MyCustomActor.generated.h"

UCLASS()
class PROSDD_API AChatGPT4_MyCustomActor : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AChatGPT4_MyCustomActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Properties");
	float MyCustomFloat = 100.0f;

	void MyCustomFunction();
};
