// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Whimel/Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain() {}
// Cross Module References
	WHIMEL_API UClass* Z_Construct_UClass_UMain_NoRegister();
	WHIMEL_API UClass* Z_Construct_UClass_UMain();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Whimel();
// End Cross Module References
	void UMain::StaticRegisterNativesUMain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMain);
	UClass* Z_Construct_UClass_UMain_NoRegister()
	{
		return UMain::StaticClass();
	}
	struct Z_Construct_UClass_UMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Whimel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Main.h" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "Comment", "/**\n   *\n   *Player Stars\n   *\n   */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "Player Stars" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMain_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_UMain_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMain_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain, Energy), METADATA_PARAMS(Z_Construct_UClass_UMain_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMain_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain, Coins), METADATA_PARAMS(Z_Construct_UClass_UMain_Statics::NewProp_Coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::NewProp_Coins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_Statics::NewProp_MaxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_Statics::NewProp_Coins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMain_Statics::ClassParams = {
		&UMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMain()
	{
		if (!Z_Registration_Info_UClass_UMain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMain.OuterSingleton, Z_Construct_UClass_UMain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMain.OuterSingleton;
	}
	template<> WHIMEL_API UClass* StaticClass<UMain>()
	{
		return UMain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMain);
	struct Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_Main_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_Main_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMain, UMain::StaticClass, TEXT("UMain"), &Z_Registration_Info_UClass_UMain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMain), 1412343860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_Main_h_1040401972(TEXT("/Script/Whimel"),
		Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_Main_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
