// Fill out your copyright notice in the Description page of Project Settings.

#include "ClarkChairReporter.h"
#include "GameFramework/Actor.h"



// Sets default values for this component's properties
UClarkChairReporter::UClarkChairReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UClarkChairReporter::BeginPlay()
{
	Super::BeginPlay();
	FString ChairName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s is reporting for booty!!"), *ChairName);
	// ...
	
}


// Called every frame
void UClarkChairReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

