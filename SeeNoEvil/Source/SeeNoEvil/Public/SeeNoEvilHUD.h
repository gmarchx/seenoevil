// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "SeeNoEvilHUD.generated.h"

UCLASS()
class ASeeNoEvilHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASeeNoEvilHUD(const FObjectInitializer& ObjectInitializer);

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

