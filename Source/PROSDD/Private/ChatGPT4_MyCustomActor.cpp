// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatGPT4_MyCustomActor.h"

// Sets default values
AChatGPT4_MyCustomActor::AChatGPT4_MyCustomActor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChatGPT4_MyCustomActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChatGPT4_MyCustomActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChatGPT4_MyCustomActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AChatGPT4_MyCustomActor::MyCustomFunction() 
{
	UE_LOG(LogTemp, Warning, TEXT("MyCustomFunctions called!"));
}

