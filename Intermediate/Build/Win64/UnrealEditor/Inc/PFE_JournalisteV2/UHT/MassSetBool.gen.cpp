// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFE_JournalisteV2/Public/MassSetBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSetBool() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	PFE_JOURNALISTEV2_API UScriptStruct* Z_Construct_UScriptStruct_FMassSetBool();
	PFE_JOURNALISTEV2_API UScriptStruct* Z_Construct_UScriptStruct_FMassSetBoolInstanceData();
	UPackage* Z_Construct_UPackage__Script_PFE_JournalisteV2();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData;
class UScriptStruct* FMassSetBoolInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSetBoolInstanceData, (UObject*)Z_Construct_UPackage__Script_PFE_JournalisteV2(), TEXT("MassSetBoolInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.OuterSingleton;
}
template<> PFE_JOURNALISTEV2_API UScriptStruct* StaticStruct<FMassSetBoolInstanceData>()
{
	return FMassSetBoolInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetBool_MetaData[];
#endif
		static void NewProp_SetBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static void NewProp_Test_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Test;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STP_MetaData[];
#endif
		static void NewProp_STP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_STP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSetBoolInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassSetBoolInstanceData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool_MetaData[] = {
		{ "Category", "MutableParameter" },
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool_SetBit(void* Obj)
	{
		((FMassSetBoolInstanceData*)Obj)->SetBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool = { "SetBool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassSetBoolInstanceData), &Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool_MetaData), Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test_SetBit(void* Obj)
	{
		((FMassSetBoolInstanceData*)Obj)->Test = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassSetBoolInstanceData), &Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test_MetaData), Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP_SetBit(void* Obj)
	{
		((FMassSetBoolInstanceData*)Obj)->STP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP = { "STP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassSetBoolInstanceData), &Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP_MetaData), Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_SetBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewProp_STP,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PFE_JournalisteV2,
		nullptr,
		&NewStructOps,
		"MassSetBoolInstanceData",
		Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::PropPointers),
		sizeof(FMassSetBoolInstanceData),
		alignof(FMassSetBoolInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassSetBoolInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSetBool>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassSetBool cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSetBool;
class UScriptStruct* FMassSetBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSetBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSetBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSetBool, (UObject*)Z_Construct_UPackage__Script_PFE_JournalisteV2(), TEXT("MassSetBool"));
	}
	return Z_Registration_Info_UScriptStruct_MassSetBool.OuterSingleton;
}
template<> PFE_JOURNALISTEV2_API UScriptStruct* StaticStruct<FMassSetBool>()
{
	return FMassSetBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSetBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSetBool_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Ayo ma boi" },
		{ "ModuleRelativePath", "Public/MassSetBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSetBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSetBool>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSetBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PFE_JournalisteV2,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassSetBool",
		nullptr,
		0,
		sizeof(FMassSetBool),
		alignof(FMassSetBool),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSetBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassSetBool_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSetBool()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSetBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSetBool.InnerSingleton, Z_Construct_UScriptStruct_FMassSetBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSetBool.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_steuh_OneDrive_Bureau_Project_PFE_PFE_Journalisme_PFE_JournalisteV2_Source_PFE_JournalisteV2_Public_MassSetBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_steuh_OneDrive_Bureau_Project_PFE_PFE_Journalisme_PFE_JournalisteV2_Source_PFE_JournalisteV2_Public_MassSetBool_h_Statics::ScriptStructInfo[] = {
		{ FMassSetBoolInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassSetBoolInstanceData_Statics::NewStructOps, TEXT("MassSetBoolInstanceData"), &Z_Registration_Info_UScriptStruct_MassSetBoolInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSetBoolInstanceData), 1684655315U) },
		{ FMassSetBool::StaticStruct, Z_Construct_UScriptStruct_FMassSetBool_Statics::NewStructOps, TEXT("MassSetBool"), &Z_Registration_Info_UScriptStruct_MassSetBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSetBool), 674496397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_steuh_OneDrive_Bureau_Project_PFE_PFE_Journalisme_PFE_JournalisteV2_Source_PFE_JournalisteV2_Public_MassSetBool_h_349090407(TEXT("/Script/PFE_JournalisteV2"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_steuh_OneDrive_Bureau_Project_PFE_PFE_Journalisme_PFE_JournalisteV2_Source_PFE_JournalisteV2_Public_MassSetBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_steuh_OneDrive_Bureau_Project_PFE_PFE_Journalisme_PFE_JournalisteV2_Source_PFE_JournalisteV2_Public_MassSetBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
