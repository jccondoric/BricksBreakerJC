// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreakerJC/BricksBreakerJCGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBricksBreakerJCGameModeBase() {}
// Cross Module References
	BRICKSBREAKERJC_API UClass* Z_Construct_UClass_ABricksBreakerJCGameModeBase_NoRegister();
	BRICKSBREAKERJC_API UClass* Z_Construct_UClass_ABricksBreakerJCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BricksBreakerJC();
	BRICKSBREAKERJC_API UClass* Z_Construct_UClass_APaddle_NoRegister();
// End Cross Module References
	void ABricksBreakerJCGameModeBase::StaticRegisterNativesABricksBreakerJCGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABricksBreakerJCGameModeBase_NoRegister()
	{
		return ABricksBreakerJCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreakerJC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BricksBreakerJCGameModeBase.h" },
		{ "ModuleRelativePath", "BricksBreakerJCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::NewProp_Paddle_MetaData[] = {
		{ "Comment", "//The Inventory of this Actor\n" },
		{ "ModuleRelativePath", "BricksBreakerJCGameModeBase.h" },
		{ "ToolTip", "The Inventory of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABricksBreakerJCGameModeBase, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::NewProp_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::NewProp_Paddle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::NewProp_Paddle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABricksBreakerJCGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::ClassParams = {
		&ABricksBreakerJCGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABricksBreakerJCGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABricksBreakerJCGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABricksBreakerJCGameModeBase, 1156609519);
	template<> BRICKSBREAKERJC_API UClass* StaticClass<ABricksBreakerJCGameModeBase>()
	{
		return ABricksBreakerJCGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABricksBreakerJCGameModeBase(Z_Construct_UClass_ABricksBreakerJCGameModeBase, &ABricksBreakerJCGameModeBase::StaticClass, TEXT("/Script/BricksBreakerJC"), TEXT("ABricksBreakerJCGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABricksBreakerJCGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
