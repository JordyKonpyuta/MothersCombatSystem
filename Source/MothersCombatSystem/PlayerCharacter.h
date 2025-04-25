// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MCS_Datas.h"
#include "GameFramework/Actor.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class MOTHERSCOMBATSYSTEM_API APlayerTeam : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerTeam();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int CurrentHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int DestinationHealth;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int CurrentMana;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int MaxMana;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Defense;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Attack;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int MagicAttack;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	ECharacters CharacterType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	FMCS_Spells Spells;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHealth();

};
