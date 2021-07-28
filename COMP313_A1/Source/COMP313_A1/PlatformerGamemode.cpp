// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGamemode.h"


void APlatformerGamemode::StartPlay()
{
	Super::StartPlay();
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Platformer Game Mode"));
}

