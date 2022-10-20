// Copyright Epic Games, Inc. All Rights Reserved.

#include "lfsGameMode.h"
#include "lfsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AlfsGameMode::AlfsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
