// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Public/SeeNoEvil.h"
#include "SeeNoEvil.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeSeeNoEvil() {}
	void ASeeNoEvilCharacter::StaticRegisterNativesASeeNoEvilCharacter()
	{
	}
	IMPLEMENT_CLASS(ASeeNoEvilCharacter, 252540280);
	void ASeeNoEvilGameMode::StaticRegisterNativesASeeNoEvilGameMode()
	{
	}
	IMPLEMENT_CLASS(ASeeNoEvilGameMode, 771979920);
	void ASeeNoEvilHUD::StaticRegisterNativesASeeNoEvilHUD()
	{
	}
	IMPLEMENT_CLASS(ASeeNoEvilHUD, 3725807168);
	void ASeeNoEvilProjectile::StaticRegisterNativesASeeNoEvilProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(ASeeNoEvilProjectile::StaticClass(),"OnHit",(Native)&ASeeNoEvilProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(ASeeNoEvilProjectile, 1556959275);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_UObject_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_UEngineTypes_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilCharacter_NoRegister();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilCharacter();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilGameMode_NoRegister();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilGameMode();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilHUD_NoRegister();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilHUD();
	SEENOEVIL_API class UFunction* Z_Construct_UFunction_ASeeNoEvilProjectile_OnHit();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilProjectile_NoRegister();
	SEENOEVIL_API class UClass* Z_Construct_UClass_ASeeNoEvilProjectile();
	SEENOEVIL_API class UPackage* Z_Construct_UPackage_SeeNoEvil();
	UClass* Z_Construct_UClass_ASeeNoEvilCharacter_NoRegister()
	{
		return ASeeNoEvilCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASeeNoEvilCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_SeeNoEvil();
			OuterClass = ASeeNoEvilCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


				UProperty* NewProp_FireAnimation = new(OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, ASeeNoEvilCharacter), 0x0000000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_FireSound = new(OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireSound, ASeeNoEvilCharacter), 0x0000000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, ASeeNoEvilCharacter), 0x0000000000010001, Z_Construct_UClass_ASeeNoEvilProjectile_NoRegister());
				UProperty* NewProp_GunOffset = new(OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(GunOffset, ASeeNoEvilCharacter), 0x0000000000000005, Z_Construct_UScriptStruct_UObject_FVector());
				UProperty* NewProp_BaseLookUpRate = new(OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ASeeNoEvilCharacter), 0x0000000000020015);
				UProperty* NewProp_BaseTurnRate = new(OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ASeeNoEvilCharacter), 0x0000000000020015);
				UProperty* NewProp_FirstPersonCameraComponent = new(OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, ASeeNoEvilCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, ASeeNoEvilCharacter), 0x00000000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation AI|Navigation Pawn|Character|InternalEvents"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SeeNoEvilCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the characters location"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeeNoEvilCharacter(Z_Construct_UClass_ASeeNoEvilCharacter, TEXT("ASeeNoEvilCharacter"));
	UClass* Z_Construct_UClass_ASeeNoEvilGameMode_NoRegister()
	{
		return ASeeNoEvilGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASeeNoEvilGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_SeeNoEvil();
			OuterClass = ASeeNoEvilGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x208802AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SeeNoEvilGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeeNoEvilGameMode(Z_Construct_UClass_ASeeNoEvilGameMode, TEXT("ASeeNoEvilGameMode"));
	UClass* Z_Construct_UClass_ASeeNoEvilHUD_NoRegister()
	{
		return ASeeNoEvilHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ASeeNoEvilHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage_SeeNoEvil();
			OuterClass = ASeeNoEvilHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SeeNoEvilHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeeNoEvilHUD(Z_Construct_UClass_ASeeNoEvilHUD, TEXT("ASeeNoEvilHUD"));
	UFunction* Z_Construct_UFunction_ASeeNoEvilProjectile_OnHit()
	{
		struct SeeNoEvilProjectile_eventOnHit_Parms
		{
			class AActor* OtherActor;
			class UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			struct FHitResult Hit;
		};
		UClass* OuterClass=Z_Construct_UClass_ASeeNoEvilProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("OnHit"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(SeeNoEvilProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Hit, SeeNoEvilProjectile_eventOnHit_Parms), 0x0000000008000182, Z_Construct_UScriptStruct_UEngineTypes_FHitResult());
			UProperty* NewProp_NormalImpulse = new(ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SeeNoEvilProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_UObject_FVector());
			UProperty* NewProp_OtherComp = new(ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SeeNoEvilProjectile_eventOnHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SeeNoEvilProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
			MetaData->SetValue(NewProp_NormalImpulse, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
			MetaData->SetValue(NewProp_OtherActor, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASeeNoEvilProjectile_NoRegister()
	{
		return ASeeNoEvilProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ASeeNoEvilProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_SeeNoEvil();
			OuterClass = ASeeNoEvilProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASeeNoEvilProjectile_OnHit());

				UProperty* NewProp_ProjectileMovement = new(OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, ASeeNoEvilProjectile), 0x00000000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, ASeeNoEvilProjectile), 0x00000000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ASeeNoEvilProjectile_OnHit()); // 1783428016
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SeeNoEvilProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("Public/SeeNoEvilProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeeNoEvilProjectile(Z_Construct_UClass_ASeeNoEvilProjectile, TEXT("ASeeNoEvilProjectile"));
	UPackage* Z_Construct_UPackage_SeeNoEvil()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SeeNoEvil")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x3013321C;
			Guid.B = 0xB0213CD1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif
