// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "COMP313_A1HUD.generated.h"

UCLASS()
class ACOMP313_A1HUD : public AHUD
{
	GENERATED_BODY()

public:
	ACOMP313_A1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

