// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DeepGreenGameMode.h"
#include "DeepGreenPlayerController.h"
#include "DeepGreenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeepGreenGameMode::ADeepGreenGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADeepGreenPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}