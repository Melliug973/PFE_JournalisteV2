// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/ExportFBXRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportFBXRule() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExportFBXRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExportFBXRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FExportFBXRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FExportFBXRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FExportFBXRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExportFBXRuleData;
class UScriptStruct* FExportFBXRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExportFBXRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("ExportFBXRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FExportFBXRuleData>()
{
	return FExportFBXRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExportFBXRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteExistingFile_MetaData[];
#endif
		static void NewProp_bOverwriteExistingFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExistingFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExportFBXRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportFBXRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory = { "ExportDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportFBXRuleData, ExportDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory_MetaData), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_SetBit(void* Obj)
	{
		((FExportFBXRuleData*)Obj)->bOverwriteExistingFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile = { "bOverwriteExistingFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExportFBXRuleData), &Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_MetaData), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((FExportFBXRuleData*)Obj)->bAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExportFBXRuleData), &Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_MetaData), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"ExportFBXRuleData",
		Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers),
		sizeof(FExportFBXRuleData),
		alignof(FExportFBXRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FExportFBXRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton, Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton;
	}
	void UExportFBXRule::StaticRegisterNativesUExportFBXRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportFBXRule);
	UClass* Z_Construct_UClass_UExportFBXRule_NoRegister()
	{
		return UExportFBXRule::StaticClass();
	}
	struct Z_Construct_UClass_UExportFBXRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportFBXRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportFBXRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/ExportFBXRule.h" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExportFBXRule, Data), Z_Construct_UScriptStruct_FExportFBXRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data_MetaData) }; // 1867796625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportFBXRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportFBXRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportFBXRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportFBXRule_Statics::ClassParams = {
		&UExportFBXRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExportFBXRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UExportFBXRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UExportFBXRule()
	{
		if (!Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton, Z_Construct_UClass_UExportFBXRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UExportFBXRule>()
	{
		return UExportFBXRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportFBXRule);
	UExportFBXRule::~UExportFBXRule() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ScriptStructInfo[] = {
		{ FExportFBXRuleData::StaticStruct, Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewStructOps, TEXT("ExportFBXRuleData"), &Z_Registration_Info_UScriptStruct_ExportFBXRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExportFBXRuleData), 1867796625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExportFBXRule, UExportFBXRule::StaticClass, TEXT("UExportFBXRule"), &Z_Registration_Info_UClass_UExportFBXRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportFBXRule), 2893083659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_3540970269(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Unreal_Projects_PFE_Journalisme_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
