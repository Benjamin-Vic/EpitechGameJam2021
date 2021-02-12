// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpitechGameJam2021GameMode.h"
#include "EpitechGameJam2021Character.h"
#include "UObject/ConstructorHelpers.h"

AEpitechGameJam2021GameMode::AEpitechGameJam2021GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
