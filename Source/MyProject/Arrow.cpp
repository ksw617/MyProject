// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "Components/BoxComponent.h"

// Sets default values
AArrow::AArrow()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMesh(TEXT("/Script/Engine.StaticMesh'/Game/ParagonSparrow/FX/Meshes/Heroes/Sparrow/Abilities/SM_Sparrow_Arrow.SM_Sparrow_Arrow'"));

	if (StaticMesh.Succeeded())
	{
		Mesh->SetStaticMesh(StaticMesh.Object);
		Mesh->SetRelativeLocationAndRotation(FVector(100.f, 0.f, 0.f), FRotator(90.f, 0.f, 0.f));
	}

	//CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("Collison Mesh"));
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("Collison Mesh"));
	CollisionMesh->SetupAttachment(Mesh);
	CollisionMesh->SetRelativeLocation(FVector(0.f, 0.f, -55.f));
	CollisionMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));

}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

