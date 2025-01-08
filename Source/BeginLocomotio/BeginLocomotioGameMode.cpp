// Copyright Epic Games, Inc. All Rights Reserved.

#include "BeginLocomotioGameMode.h"
#include "BeginLocomotioCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABeginLocomotioGameMode::ABeginLocomotioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
