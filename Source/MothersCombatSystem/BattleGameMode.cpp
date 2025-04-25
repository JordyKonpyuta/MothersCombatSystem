// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGameMode.h"

void ABattleGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	Players[0]->CharacterType = ECharacters::Boken;
	Players[1]->CharacterType = ECharacters::Nozomi;
	Players[2]->CharacterType = ECharacters::Aeris;
	
	InitEnnemies();
}


