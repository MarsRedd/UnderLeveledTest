// Fill out your copyright notice in the Description page of Project Settings.

#include "P_UElog.h"


// Sets default values for this component's properties
UP_UElog::UP_UElog()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UP_UElog::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Pauls Chair: 'I LOVE ASS!!!!!'"));
	
}


// Called every frame
void UP_UElog::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

