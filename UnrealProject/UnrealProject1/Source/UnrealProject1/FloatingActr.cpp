// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject1.h"
#include "FloatingActr.h"


// Sets default values
AFloatingActr::AFloatingActr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActr::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}

