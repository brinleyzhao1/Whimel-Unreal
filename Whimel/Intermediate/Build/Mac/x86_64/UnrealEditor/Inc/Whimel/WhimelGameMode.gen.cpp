// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Whimel/WhimelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhimelGameMode() {}
// Cross Module References
	WHIMEL_API UClass* Z_Construct_UClass_AWhimelGameMode_NoRegister();
	WHIMEL_API UClass* Z_Construct_UClass_AWhimelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Whimel();
// End Cross Module References
	void AWhimelGameMode::StaticRegisterNativesAWhimelGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWhimelGameMode);
	UClass* Z_Construct_UClass_AWhimelGameMode_NoRegister()
	{
		return AWhimelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWhimelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWhimelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Whimel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWhimelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WhimelGameMode.h" },
		{ "ModuleRelativePath", "WhimelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWhimelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhimelGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWhimelGameMode_Statics::ClassParams = {
		&AWhimelGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWhimelGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWhimelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWhimelGameMode()
	{
		if (!Z_Registration_Info_UClass_AWhimelGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWhimelGameMode.OuterSingleton, Z_Construct_UClass_AWhimelGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWhimelGameMode.OuterSingleton;
	}
	template<> WHIMEL_API UClass* StaticClass<AWhimelGameMode>()
	{
		return AWhimelGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWhimelGameMode);
	struct Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_WhimelGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_WhimelGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWhimelGameMode, AWhimelGameMode::StaticClass, TEXT("AWhimelGameMode"), &Z_Registration_Info_UClass_AWhimelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhimelGameMode), 2503126160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_WhimelGameMode_h_1881725007(TEXT("/Script/Whimel"),
		Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_WhimelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Whimel_Source_Whimel_WhimelGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
