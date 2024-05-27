// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyArrayDouble.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PFE_JOURNALISTEV2_API UMyArrayDouble : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyArrayDouble();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	TArray<TArray<FString>> DoubleListString;
	TArray<TArray<int32>> DoubleListInt;
	TArray<TArray<FText>> DoubleListText;
	TArray<TArray<FSlateColor>> DoubleListSlateColor;
	TArray<int32> PhotoIndexArray;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	void AddDoubleArrayString(TArray<FString> ListString);
	UFUNCTION(BlueprintCallable)
		TArray<FString> GetDoubleArrayString(int Index);
	UFUNCTION(BlueprintCallable)
		TArray<int32> GetDoubleArrayIntIndex(int Index);
	UFUNCTION(BlueprintCallable)
		int32 GetDoubleArrayInt();
	UFUNCTION(BlueprintCallable)
		void AddDoubleArrayInt(TArray<int32> ListInt);
	UFUNCTION(BlueprintCallable)
		TArray<FText> GetDoubleArrayText(int Index);
	UFUNCTION(BlueprintCallable)
		void AddDoubleArrayText(TArray<FText> ListText);



	
	
};
