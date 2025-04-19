// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemy.h"
#include "PlayerCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "BattleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MOTHERSCOMBATSYSTEM_API ABattleGameMode : public AGameModeBase
{
	GENERATED_BODY()

	public:
	
	UPROPERTY(EditAnywhere)
	TArray<APlayerTeam*> Players;

	UPROPERTY(EditAnywhere)
	TArray<AEnnemy*> Ennemies;

	UPROPERTY(EditAnywhere)
	TArray<FMCS_Items> Inventory;
};
