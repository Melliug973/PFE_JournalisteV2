// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Factories/PointCloudFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFactoryNew() {}
// Cross Module References
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactoryNew();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	void UPointCloudFactoryNew::StaticRegisterNativesUPointCloudFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudFactoryNew);
	UClass* Z_Construct_UClass_UPointCloudFactoryNew_NoRegister()
	{
		return UPointCloudFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactoryNew_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PointCloudFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/PointCloudFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFactoryNew_Statics::ClassParams = {
		&UPointCloudFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudFactoryNew_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPointCloudFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UPointCloudFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudFactoryNew.OuterSingleton, Z_Construct_UClass_UPointCloudFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudFactoryNew.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudFactoryNew>()
	{
		return UPointCloudFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFactoryNew);
	UPointCloudFactoryNew::~UPointCloudFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Users_dudas_OneDrive_Desktop_PFE_JournalisteV2_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dudas_OneDrive_Desktop_PFE_JournalisteV2_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudFactoryNew, UPointCloudFactoryNew::StaticClass, TEXT("UPointCloudFactoryNew"), &Z_Registration_Info_UClass_UPointCloudFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudFactoryNew), 2480242279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dudas_OneDrive_Desktop_PFE_JournalisteV2_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactoryNew_h_2839354776(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_Users_dudas_OneDrive_Desktop_PFE_JournalisteV2_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dudas_OneDrive_Desktop_PFE_JournalisteV2_PFE_JournalisteV2_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
