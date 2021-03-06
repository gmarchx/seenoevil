// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "SeeNoEvil.h"
#include "SeeNoEvilGameMode.h"
#include "SeeNoEvilHUD.h"
#include "SeeNoEvilCharacter.h"

ASeeNoEvilGameMode::ASeeNoEvilGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASeeNoEvilHUD::StaticClass();
}
