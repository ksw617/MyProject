// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreatureAnim.h"
#include "PlayerAnim.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UPlayerAnim : public UCreatureAnim
{
	GENERATED_BODY()
public:
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool IsFalling;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float YawOffset;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FRotator AimRotation;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float RotateYaw;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FRotator MovingRotation;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FRotator PrevRotation;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float PrevDistanceCurve;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float DistanceCurve;
	UPROPERTY(Category = "Animation", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float DeltaDistanceCurve;
public:
	UPlayerAnim();
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	virtual void PlayAttackMontage() override;
};
