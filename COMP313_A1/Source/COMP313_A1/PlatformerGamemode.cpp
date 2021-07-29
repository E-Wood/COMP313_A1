// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGamemode.h"


void APlatformerGamemode::StartPlay()
{
	Super::StartPlay();
	
	check(GEngine != nullptr);
}

