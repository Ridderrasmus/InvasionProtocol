// Copyright Epic Games, Inc. All Rights Reserved.

#include "InvasionProtocolGameMode.h"
#include "InvasionProtocolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInvasionProtocolGameMode::AInvasionProtocolGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
