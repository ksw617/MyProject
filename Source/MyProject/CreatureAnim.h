// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CreatureAnim.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UCreatureAnim : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FVector Velocity;
	UPROPERTY(Category = "Animaiton", VisibleAnywhere, BlueprintReadOnly)
	float Speed = false;
	UPROPERTY(Category = "Animaiton", VisibleAnywhere, BlueprintReadOnly)
	bool ShouldMove = false;
public:
	UPROPERTY(VisibleAnywhere)
	UAnimMontage* AttackMontage;
	UPROPERTY(VisibleAnywhere)
	class ACharacter* Character;
	UPROPERTY(VisibleAnywhere)
	class UCharacterMovementComponent* CharacterMovement;
public:
	UCreatureAnim();
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	virtual void PlayAttackMontage();

};
