// Fill out your copyright notice in the Description page of Project Settings.


#include "Creature.h"	 
#include "MyActorComponent.h"

// Sets default values
ACreature::ACreature()
{

}

// Called when the game starts or when spawned
void ACreature::BeginPlay()
{
	Super::BeginPlay();
	MyActorComponent = CreateDefaultSubobject<UMyActorComponent>(TEXT("MyActorComponent"));
	UE_LOG(LogTemp, Log, TEXT("Creature::BeginPlay"));
	
}

