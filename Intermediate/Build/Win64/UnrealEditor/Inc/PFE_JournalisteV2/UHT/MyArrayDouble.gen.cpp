// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFE_JournalisteV2/MyArrayDouble.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyArrayDouble() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PFE_JOURNALISTEV2_API UClass* Z_Construct_UClass_UMyArrayDouble();
	PFE_JOURNALISTEV2_API UClass* Z_Construct_UClass_UMyArrayDouble_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PFE_JournalisteV2();
// End Cross Module References
	DEFINE_FUNCTION(UMyArrayDouble::execAddDoubleArrayText)
	{
		P_GET_TARRAY(FText,Z_Param_ListText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDoubleArrayText(Z_Param_ListText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyArrayDouble::execGetDoubleArrayText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetDoubleArrayText(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyArrayDouble::execGetDoubleArrayString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetDoubleArrayString(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyArrayDouble::execAddDoubleArrayString)
	{
		P_GET_TARRAY(FString,Z_Param_ListString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDoubleArrayString(Z_Param_ListString);
		P_NATIVE_END;
	}
	void UMyArrayDouble::StaticRegisterNativesUMyArrayDouble()
	{
		UClass* Class = UMyArrayDouble::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDoubleArrayString", &UMyArrayDouble::execAddDoubleArrayString },
			{ "AddDoubleArrayText", &UMyArrayDouble::execAddDoubleArrayText },
			{ "GetDoubleArrayString", &UMyArrayDouble::execGetDoubleArrayString },
			{ "GetDoubleArrayText", &UMyArrayDouble::execGetDoubleArrayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics
	{
		struct MyArrayDouble_eventAddDoubleArrayString_Parms
		{
			TArray<FString> ListString;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListString_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::NewProp_ListString_Inner = { "ListString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::NewProp_ListString = { "ListString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventAddDoubleArrayString_Parms, ListString), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::NewProp_ListString_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::NewProp_ListString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyArrayDouble.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyArrayDouble, nullptr, "AddDoubleArrayString", nullptr, nullptr, Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::MyArrayDouble_eventAddDoubleArrayString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::MyArrayDouble_eventAddDoubleArrayString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics
	{
		struct MyArrayDouble_eventAddDoubleArrayText_Parms
		{
			TArray<FText> ListText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ListText_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::NewProp_ListText_Inner = { "ListText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::NewProp_ListText = { "ListText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventAddDoubleArrayText_Parms, ListText), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::NewProp_ListText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::NewProp_ListText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyArrayDouble.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyArrayDouble, nullptr, "AddDoubleArrayText", nullptr, nullptr, Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::MyArrayDouble_eventAddDoubleArrayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::MyArrayDouble_eventAddDoubleArrayText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics
	{
		struct MyArrayDouble_eventGetDoubleArrayString_Parms
		{
			int32 Index;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventGetDoubleArrayString_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventGetDoubleArrayString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyArrayDouble.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyArrayDouble, nullptr, "GetDoubleArrayString", nullptr, nullptr, Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::MyArrayDouble_eventGetDoubleArrayString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::MyArrayDouble_eventGetDoubleArrayString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics
	{
		struct MyArrayDouble_eventGetDoubleArrayText_Parms
		{
			int32 Index;
			TArray<FText> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventGetDoubleArrayText_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyArrayDouble_eventGetDoubleArrayText_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyArrayDouble.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyArrayDouble, nullptr, "GetDoubleArrayText", nullptr, nullptr, Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::MyArrayDouble_eventGetDoubleArrayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::MyArrayDouble_eventGetDoubleArrayText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyArrayDouble);
	UClass* Z_Construct_UClass_UMyArrayDouble_NoRegister()
	{
		return UMyArrayDouble::StaticClass();
	}
	struct Z_Construct_UClass_UMyArrayDouble_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyArrayDouble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PFE_JournalisteV2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyArrayDouble_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyArrayDouble_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayString, "AddDoubleArrayString" }, // 2731081210
		{ &Z_Construct_UFunction_UMyArrayDouble_AddDoubleArrayText, "AddDoubleArrayText" }, // 2316626197
		{ &Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayString, "GetDoubleArrayString" }, // 624765010
		{ &Z_Construct_UFunction_UMyArrayDouble_GetDoubleArrayText, "GetDoubleArrayText" }, // 1509562519
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyArrayDouble_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyArrayDouble_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyArrayDouble.h" },
		{ "ModuleRelativePath", "MyArrayDouble.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyArrayDouble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyArrayDouble>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyArrayDouble_Statics::ClassParams = {
		&UMyArrayDouble::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyArrayDouble_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyArrayDouble_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyArrayDouble()
	{
		if (!Z_Registration_Info_UClass_UMyArrayDouble.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyArrayDouble.OuterSingleton, Z_Construct_UClass_UMyArrayDouble_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyArrayDouble.OuterSingleton;
	}
	template<> PFE_JOURNALISTEV2_API UClass* StaticClass<UMyArrayDouble>()
	{
		return UMyArrayDouble::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyArrayDouble);
	UMyArrayDouble::~UMyArrayDouble() {}
	struct Z_CompiledInDeferFile_FID_PFE_PFE_JournalisteV2_Source_PFE_JournalisteV2_MyArrayDouble_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PFE_PFE_JournalisteV2_Source_PFE_JournalisteV2_MyArrayDouble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyArrayDouble, UMyArrayDouble::StaticClass, TEXT("UMyArrayDouble"), &Z_Registration_Info_UClass_UMyArrayDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyArrayDouble), 3184317838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PFE_PFE_JournalisteV2_Source_PFE_JournalisteV2_MyArrayDouble_h_2685566273(TEXT("/Script/PFE_JournalisteV2"),
		Z_CompiledInDeferFile_FID_PFE_PFE_JournalisteV2_Source_PFE_JournalisteV2_MyArrayDouble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PFE_PFE_JournalisteV2_Source_PFE_JournalisteV2_MyArrayDouble_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
