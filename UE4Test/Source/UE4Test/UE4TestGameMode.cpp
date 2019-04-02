// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4TestGameMode.h"
#include "UE4TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4TestGameMode::AUE4TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
