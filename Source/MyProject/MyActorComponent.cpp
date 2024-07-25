// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true; //InitializeComponent 호출가능
	Level = 1;
}


void UMyActorComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetLevel(Level);
}

// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UMyActorComponent::SetLevel(int32 Lv)
{

}

void UMyActorComponent::OnDamaged(float DamageAmount)
{
	Hp -= DamageAmount;
	if (Hp < 0)
	{
		Hp = 0;
	}

	UE_LOG(LogTemp, Warning, TEXT("HP : %d"), Hp);
}

