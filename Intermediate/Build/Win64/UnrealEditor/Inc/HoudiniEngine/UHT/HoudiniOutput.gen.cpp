// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Public/HoudiniOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniOutput();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniComponentOutput();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplitableOutput();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHoudiniOutput::StaticRegisterNativesUHoudiniOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniOutput);
	UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister()
	{
		return UHoudiniOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams = {
		&UHoudiniOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton, Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniOutput>()
	{
		return UHoudiniOutput::StaticClass();
	}
	UHoudiniOutput::UHoudiniOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniOutput);
	UHoudiniOutput::~UHoudiniOutput() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput;
class UScriptStruct* FHoudiniSplitableOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSplitableOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniSplitableOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniSplitableOutput>()
{
	return FHoudiniSplitableOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic struct for all SplitableOutput\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic struct for all SplitableOutput" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSplitableOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewProp_SplitValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewProp_SplitValue = { "SplitValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniSplitableOutput, SplitValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewProp_SplitValue_MetaData), Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewProp_SplitValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewProp_SplitValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniSplitableOutput",
		Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::PropPointers),
		sizeof(FHoudiniSplitableOutput),
		alignof(FHoudiniSplitableOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplitableOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniComponentOutput>() == std::is_polymorphic<FHoudiniSplitableOutput>(), "USTRUCT FHoudiniComponentOutput cannot be polymorphic unless super FHoudiniSplitableOutput is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniComponentOutput;
class UScriptStruct* FHoudiniComponentOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniComponentOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniComponentOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniComponentOutput>()
{
	return FHoudiniComponentOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitActor_MetaData[];
#endif
		static void NewProp_bSplitActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic struct for all ComponentOutput\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic struct for all ComponentOutput" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniComponentOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniComponentOutput, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_ComponentName_MetaData), Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_ComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor_SetBit(void* Obj)
	{
		((FHoudiniComponentOutput*)Obj)->bSplitActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor = { "bSplitActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniComponentOutput), &Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor_MetaData), Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewProp_bSplitActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniSplitableOutput,
		&NewStructOps,
		"HoudiniComponentOutput",
		Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::PropPointers),
		sizeof(FHoudiniComponentOutput),
		alignof(FHoudiniComponentOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniComponentOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniComponentOutput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniSplitableOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniSplitableOutput_Statics::NewStructOps, TEXT("HoudiniSplitableOutput"), &Z_Registration_Info_UScriptStruct_HoudiniSplitableOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniSplitableOutput), 1413997471U) },
		{ FHoudiniComponentOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniComponentOutput_Statics::NewStructOps, TEXT("HoudiniComponentOutput"), &Z_Registration_Info_UScriptStruct_HoudiniComponentOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniComponentOutput), 2700592739U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniOutput, UHoudiniOutput::StaticClass, TEXT("UHoudiniOutput"), &Z_Registration_Info_UClass_UHoudiniOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniOutput), 3011772369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_1757130516(TEXT("/Script/HoudiniEngine"),
		Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3Test_Plugins_HoudiniEngine_Source_HoudiniEngine_Public_HoudiniOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
