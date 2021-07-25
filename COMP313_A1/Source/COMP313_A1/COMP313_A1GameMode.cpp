// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMP313_A1GameMode.h"
#include "COMP313_A1HUD.h"
#include "COMP313_A1Character.h"
#include "UObject/ConstructorHelpers.h"

ACOMP313_A1GameMode::ACOMP313_A1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACOMP313_A1HUD::StaticClass();
}
