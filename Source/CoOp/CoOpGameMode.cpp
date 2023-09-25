// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoOpGameMode.h"
#include "CoOpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoOpGameMode::ACoOpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
