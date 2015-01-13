// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef SEENOEVIL_SeeNoEvilGameMode_generated_h
#error "SeeNoEvilGameMode.generated.h already included, missing '#pragma once' in SeeNoEvilGameMode.h"
#endif
#define SEENOEVIL_SeeNoEvilGameMode_generated_h

#define ASeeNoEvilGameMode_EVENTPARMS
#define ASeeNoEvilGameMode_RPC_WRAPPERS
#define ASeeNoEvilGameMode_CALLBACK_WRAPPERS
#define ASeeNoEvilGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesASeeNoEvilGameMode(); \
	friend SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilGameMode(); \
	public: \
	DECLARE_CLASS(ASeeNoEvilGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, SeeNoEvil, SEENOEVIL_API) \
	DECLARE_SERIALIZER(ASeeNoEvilGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ASeeNoEvilGameMode*>(this); }


#define ASeeNoEvilGameMode_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEENOEVIL_API ASeeNoEvilGameMode(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASeeNoEvilGameMode) \
private: \
	/** Private copy-constructor, should never be used */ \
	SEENOEVIL_API ASeeNoEvilGameMode(const ASeeNoEvilGameMode& InCopy); \
public:


#define ASeeNoEvilGameMode_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	SEENOEVIL_API ASeeNoEvilGameMode(const ASeeNoEvilGameMode& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASeeNoEvilGameMode)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ASeeNoEvilGameMode


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ASeeNoEvilGameMode_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASeeNoEvilGameMode_RPC_WRAPPERS \
	ASeeNoEvilGameMode_CALLBACK_WRAPPERS \
	ASeeNoEvilGameMode_INCLASS \
	ASeeNoEvilGameMode_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASeeNoEvilGameMode_RPC_WRAPPERS \
	ASeeNoEvilGameMode_CALLBACK_WRAPPERS \
	ASeeNoEvilGameMode_INCLASS \
	ASeeNoEvilGameMode_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


