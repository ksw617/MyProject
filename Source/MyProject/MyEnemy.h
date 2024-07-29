// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyEnemy.generated.h"

UCLASS()
class MYPROJECT_API AMyEnemy : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	class UEnemyAnim* EnemyAnimInstance;
private:
	bool IsAttacking = false;  
public:
		UPROPERTY(VisibleAnywhere)
		class UMyActorComponent* MyActorComponent;

public:
	void SetIsAttacking(bool Value) { IsAttacking = Value; }
	bool GetIsAttacking() const { return IsAttacking; }
public:
	// Sets default values for this character's properties
	AMyEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void Attack();
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

};
