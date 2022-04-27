// Copyright Epic Games, Inc. All Rights Reserved.

#include "StarTa_0424GameMode.h"
#include "StarTa_0424Character.h"
#include "UObject/ConstructorHelpers.h"

AStarTa_0424GameMode::AStarTa_0424GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
