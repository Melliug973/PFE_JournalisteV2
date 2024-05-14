﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArrayDouble.h"

// Sets default values for this component's properties
UMyArrayDouble::UMyArrayDouble()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyArrayDouble::BeginPlay()
{
	Super::BeginPlay();

	
	// ...
	
}


// Called every frame
void UMyArrayDouble::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyArrayDouble::AddDoubleArrayString(TArray<FString> ListString)
{
	
	DoubleListString.Add(ListString);
	//UE_LOG(LogTemp, Warning, TEXT("NONONONONO"));
	
	//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::White, TEXT("NONONONONO"));
	
}





TArray<FString> UMyArrayDouble::GetDoubleArrayString(int ArrayIndex)
{
	/*TArray<FString> ArrayString;
	//UE_LOG(LogTemp, Warning, TEXT("GetDoubleArray"));
	// Vérifiez si l'index est valide
	if (ArrayIndex >= 0 && ArrayIndex <= DoubleListString.Num())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Index invalide"));
		for (int32 i = 0; i < DoubleListString.Num(); i++)
		{
			if (i == ArrayIndex)
			{
					//UE_LOG(LogTemp, Warning, TEXT("OUIOUIOUI"));
					ArrayString = DoubleListString[i];

			}
		}
	}
	else
	{
		// Gérez le cas où l'index n'est pas valide 
		//UE_LOG(LogTemp, Warning, TEXT("Index invalide"));
	}
	
	return ArrayString;
	*/

	if (ArrayIndex >= 0 && ArrayIndex < DoubleListString.Num())
	{
		return DoubleListString[ArrayIndex];
	}
	else
	{
		// Tratează cazul în care indexul nu este valid
		return TArray<FString>();
	}
}

TArray<int32> UMyArrayDouble::GetDoubleArrayIntIndex(int Index)
{
	if (Index >= 0 && Index < DoubleListInt.Num())
	{
		return DoubleListInt[Index];
	}
	else
	{
		// Tratează cazul în care indexul nu este valid
		return TArray<int32>();
	}
	
}

int32 UMyArrayDouble::GetDoubleArrayInt()
{
	return DoubleListInt.Num();
}

void UMyArrayDouble::AddDoubleArrayInt(TArray<int32> ListInt)
{
	DoubleListInt.Add(ListInt);
}



TArray<FText> UMyArrayDouble::GetDoubleArrayText(int Index)
{
	TArray<FText> ArrayText;
	//UE_LOG(LogTemp, Warning, TEXT("GetDoubleArray"));
	// Vérifiez si l'index est valide
	if (Index >= 0 && Index <= DoubleListText.Num())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Index invalide"));
		for (int32 i = 0; i < DoubleListText.Num(); i++)
		{
			if (i == Index)
			{
				//UE_LOG(LogTemp, Warning, TEXT("OUIOUIOUI"));
				ArrayText = DoubleListText[i];

			}
		}
	}
	else
	{
		// Gérez le cas où l'index n'est pas valide 
		//UE_LOG(LogTemp, Warning, TEXT("Index invalide"));
	}

	return ArrayText;
}

void UMyArrayDouble::AddDoubleArrayText(TArray<FText> ListText)
{
	DoubleListText.Add(ListText);
}









