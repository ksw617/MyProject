// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnim.h"
#include "GameFramework/CharacterMovementComponent.h"

UEnemyAnim::UEnemyAnim()
{

}

void UEnemyAnim::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM(TEXT("/Script/Engine.AnimMontage'/Game/ParagonGreystone/Characters/Heroes/Greystone/Animations/Attack_PrimaryA_Montage.Attack_PrimaryA_Montage'"));

	if (AM.Succeeded())
	{
		AttackMontage = AM.Object;
	}
}

void UEnemyAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (IsValid(CharacterMovement))
	{
		Velocity = CharacterMovement->Velocity;
		Speed = Velocity.Size2D();
		ShouldMove = Speed > 3.f;
	}

}
