// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerCharacter.h"
#include "PlatformerGamemode.generated.h"


/**
 * 
 */
UCLASS()
class COMP313_A1_API APlatformerGamemode : public AGameModeBase
{
	GENERATED_BODY()
		
	virtual void StartPlay() override;
	
};
