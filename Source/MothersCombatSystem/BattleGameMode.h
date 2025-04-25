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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BattleGameMode")
	TArray<APlayerTeam*> Players = {nullptr, nullptr, nullptr};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BattleGameMode")
	TArray<AEnnemy*> Ennemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BattleGameMode")
	TArray<FMCS_Items> Inventory;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Battle")
	void InitEnnemies();
};
