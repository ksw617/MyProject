// Fill out your copyright notice in the Description page of Project Settings.


#include "Creature.h"	 
#include "MyActorComponent.h"

// Sets default values
ACreature::ACreature()
{
	MyActorComponent = CreateDefaultSubobject<UMyActorComponent>(TEXT("MyActorComponent"));
}

