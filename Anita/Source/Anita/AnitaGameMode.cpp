// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnitaGameMode.h"
#include "AnitaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnitaGameMode::AAnitaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MyAnitaCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
