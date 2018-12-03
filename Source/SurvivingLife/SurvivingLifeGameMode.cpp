// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SurvivingLifeGameMode.h"
#include "SurvivingLifePlayerController.h"
#include "SurvivingLifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivingLifeGameMode::ASurvivingLifeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASurvivingLifePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}