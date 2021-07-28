// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class COMP313_A1_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Forward/Back Movement handling
	UFUNCTION()
		void MoveForward(float Value);

	// Left/Right Movement handling
	UFUNCTION()
		void MoveRight(float Value);

	// Starting jump
	UFUNCTION()
		void StartJump();

	// Stopping jump
	UFUNCTION()
		void StopJump();

	// sets first person camera
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* CameraComponent;
};


