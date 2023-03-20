// Shoot Them Up Game,All Rights Reserved.


#include "STUGameModeBase.h"
#include "Player/STUCharacter.h"
#include "Player/STUPlayerController.h"

ASTUGameModeBase::ASTUGameModeBase()
{
	DefaultPawnClass = ASTUCharacter::StaticClass();
	PlayerControllerClass = ASTUPlayerController::StaticClass();
}