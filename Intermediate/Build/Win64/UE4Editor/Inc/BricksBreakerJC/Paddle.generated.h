// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRICKSBREAKERJC_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define BRICKSBREAKERJC_Paddle_generated_h

#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_SPARSE_DATA
#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_RPC_WRAPPERS
#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BricksBreakerJC"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BricksBreakerJC"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Paddle() { return STRUCT_OFFSET(APaddle, SM_Paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_11_PROLOG
#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_SPARSE_DATA \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_RPC_WRAPPERS \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_INCLASS \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_SPARSE_DATA \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_INCLASS_NO_PURE_DECLS \
	BricksBreakerJC_Source_BricksBreakerJC_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BRICKSBREAKERJC_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BricksBreakerJC_Source_BricksBreakerJC_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
