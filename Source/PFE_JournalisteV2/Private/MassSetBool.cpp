// Fill out your copyright notice in the Description page of Project Settings.


#include "MassSetBool.h"
#include "MassSignalSubsystem.h"
#include "MassStateTreeExecutionContext.h"
#include "StateTreeLinker.h"

bool FMassSetBool::Link(FStateTreeLinker& Linker)
{
	//Linker.LinkInstanceDataProperty(DurationHandle, STATETREE_INSTANCEDATA_PROPERTY(FMyStateTreeTaskBlueprintBaseInstanceData, Duration));
	// 
	//Linker.LinkExternalData(FMyStateTreeTaskBlueprintBaseInstanceData, Duration);
	// 
	//Linker.LinkInstanceDataProperty(TimeHandle, STATETREE_INSTANCEDATA_PROPERTY(FMassPlayAnimationTaskInstanceData, Time));
	//Linker.LinkInstanceDataProperty(AnimationIndexHandle, STATETREE_INSTANCEDATA_PROPERTY(FMassPlayAnimationTaskInstanceData, AnimationIndex));

	return true;
}

template <typename T>
EPropertyBagResult SetStateTreeReferenceParameter(FMassStateTreeReference& MassStateTreeReference, const FName Test, const T& Value)
{
	auto& InstancedPropertyBag = StateTreeReference.GetMutableParameters();

	const auto PropertyBagResult = InstancedPropertyBag.SetValueStruct(Test, Value);
	ensure(PropertyBagResult == EPropertyBagResult::Success);

	// set overriden flag
	if (auto* Desc = InstancedPropertyBag.FindPropertyDescByName(Test))
	{
		StateTreeReference.SetPropertyOverridden(Desc->ID, true);
	}

	return PropertyBagResult;
}