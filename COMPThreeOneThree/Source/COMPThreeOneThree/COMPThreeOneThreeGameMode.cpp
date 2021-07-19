// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMPThreeOneThreeGameMode.h"
#include "COMPThreeOneThreeHUD.h"
#include "COMPThreeOneThreeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACOMPThreeOneThreeGameMode::ACOMPThreeOneThreeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACOMPThreeOneThreeHUD::StaticClass();
}
