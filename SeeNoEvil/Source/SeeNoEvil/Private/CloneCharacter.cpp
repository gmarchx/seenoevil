// Fill out your copyright notice in the Description page of Project Settings.

#include "SeeNoEvil.h"
#include "CloneCharacter.h"
#include "CloneController.h"
#include "SeeNoEvilCharacter.h"
#include <vector>

std::vector<ASeeNoEvilCharacter::Key> &inputs = ASeeNoEvilCharacter::inputs;

ACloneCharacter::ACloneCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

}

void ACloneCharacter::Move(FVector direction, float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(direction, Value);
	}
}

