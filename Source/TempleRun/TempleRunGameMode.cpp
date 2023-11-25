// Copyright Epic Games, Inc. All Rights Reserved.

#include "TempleRunGameMode.h"
#include "TempleRunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATempleRunGameMode::ATempleRunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
