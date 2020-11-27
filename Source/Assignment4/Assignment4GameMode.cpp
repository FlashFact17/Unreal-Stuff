// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment4GameMode.h"
#include "Assignment4PlayerController.h"
#include "Assignment4Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignment4GameMode::AAssignment4GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAssignment4PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}