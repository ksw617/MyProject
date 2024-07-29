// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreatureAnim.h"
#include "EnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEnemyAnim : public UCreatureAnim
{
	GENERATED_BODY()
public:
	UEnemyAnim();
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
