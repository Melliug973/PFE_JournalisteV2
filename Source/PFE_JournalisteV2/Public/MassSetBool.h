// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassStateTreeTypes.h"
#include "MassSetBool.generated.h"

class UMassSignalSubsystem;
USTRUCT()
struct PFE_JOURNALISTEV2_API FMassSetBoolInstanceData
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = Parameter)
	float Duration = 0.f;

	UPROPERTY(EditAnywhere, Category = MutableParameter)
	bool SetBool;
	UPROPERTY(VisibleAnywhere, Category = Output)
	bool Test = SetBool;
	UPROPERTY(EditAnywhere, Category = Input)
	bool STP;
};

USTRUCT(DisplayName = "Ayo ma boi")
struct PFE_JOURNALISTEV2_API FMassSetBool : public FMassStateTreeTaskBase
{
	GENERATED_BODY()

	using FInstanceDataType = FMassSetBoolInstanceData;

	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FMassSetBoolInstanceData::StaticStruct(); }
};

