// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere)
	bool a;		//Boolean
	UPROPERTY(EditAnywhere)
	int32 b;	//Integer
	UPROPERTY(EditAnywhere)
	float c;	//Float
	UPROPERTY(EditAnywhere)
	FString d;	//String
	UPROPERTY(EditAnywhere)
	FVector e;	//Vector //x,y,z
	UPROPERTY(EditAnywhere)
	FRotator f; //Rotator //x:roll, y:pitch, z:yaw
private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	void KeyUpDown(float Value);
	void KeyLeftRight(float Value);
	void MouseLookLeftRight(float Value);
	void MouseLookUpDown(float Value);
};
