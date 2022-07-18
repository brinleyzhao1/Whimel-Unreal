// Copyright Epic Games, Inc. All Rights Reserved.

#include "WhimelGameMode.h"
#include "WhimelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWhimelGameMode::AWhimelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
