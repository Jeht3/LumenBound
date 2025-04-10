// Copyright Epic Games, Inc. All Rights Reserved.

#include "LumenBoundGameMode.h"
#include "LumenBoundPlayerController.h"
#include "LumenBoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALumenBoundGameMode::ALumenBoundGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALumenBoundPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}