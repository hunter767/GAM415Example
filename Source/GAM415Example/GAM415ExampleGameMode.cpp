// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GAM415ExampleGameMode.h"
#include "GAM415ExampleHUD.h"
#include "GAM415ExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAM415ExampleGameMode::AGAM415ExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGAM415ExampleHUD::StaticClass();
}
