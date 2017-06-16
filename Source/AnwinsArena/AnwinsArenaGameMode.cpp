// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AnwinsArenaGameMode.h"
#include "AnwinsArenaHUD.h"
#include "AnwinsArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnwinsArenaGameMode::AAnwinsArenaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAnwinsArenaHUD::StaticClass();
}
