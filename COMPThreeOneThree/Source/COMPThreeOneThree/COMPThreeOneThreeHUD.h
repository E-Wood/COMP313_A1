// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "COMPThreeOneThreeHUD.generated.h"

UCLASS()
class ACOMPThreeOneThreeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACOMPThreeOneThreeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

