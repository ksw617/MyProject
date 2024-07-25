// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Engine/DataTable.h" //�߰�

UMyGameInstance::UMyGameInstance()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DT(TEXT("/Script/Engine.DataTable'/Game/Data/DT_CharacterInfo.DT_CharacterInfo'"));
	if (DT.Succeeded())
	{
		CharacterDataTable = DT.Object;
	}
}

void UMyGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Log, TEXT("Character Data : %d"), GetCharaterData(1)->MaxHp);
}

FCharacterData* UMyGameInstance::GetCharaterData(int32 Level)
{
	FName RowName = FName(*FString::Printf(TEXT("Lv%d"), Level));


	return CharacterDataTable->FindRow<FCharacterData>(RowName, TEXT(""));
}
