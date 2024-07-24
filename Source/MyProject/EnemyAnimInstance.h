// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Category = "Animaiton", EditAnywhere, BlueprintReadOnly)
	UAnimMontage* AttackMontage;
public:
	UEnemyAnimInstance();
public:
	void PlayAttackMontage();
};
