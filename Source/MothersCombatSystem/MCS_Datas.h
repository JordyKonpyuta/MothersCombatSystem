// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MCS_Datas.generated.h"

UENUM(BlueprintType)
enum class ECharacters : uint8
{
	Nozomi UMETA(DisplayName = "Nozomi"),
	Boken UMETA(DisplayName = "Boken"),
	Aeris UMETA(DisplayName = "Aeris")
};

UENUM(BlueprintType)
enum class EStatGain : uint8
{
	Health UMETA(DisplayName = "Health"),
	Mana UMETA(DisplayName = "Mana")
};

UENUM(BlueprintType)
enum class ESpellType : uint8
{
	Team UMETA(DisplayName = "Team"),
	OneEnnemy UMETA(DisplayName = "OneEnnemy"),
	AllEnnemies UMETA(DisplayName = "AllEnnemies")
};

UENUM(BlueprintType)
enum class EEnnemies : uint8
{
	AngryBird UMETA(DisplayName = "AngryBird"),
	VeryAngryBird UMETA (DisplayName = "VeryAngryBird"),
	Popo UMETA(DisplayName = "Popo"),
	MisterPopo UMETA(DisplayName = "MisterPopo"),
	FlyingPopo UMETA(DisplayName = "FlyingPopo"),
	HauntedPaladinArmour UMETA(DisplayName = "HauntedPaladinArmour"),
	HauntedWarriorArmour UMETA(DisplayName = "HauntedWarriorArmour"),
	ChuppaKid UMETA(DisplayName = "ChuppaKid"),
	ChuppaMecha UMETA(DisplayName = "ChuppaMecha")
};

USTRUCT(BlueprintType)
struct MOTHERSCOMBATSYSTEM_API FMCS_Items
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int QuantityGained;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatGain StatGain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	FMCS_Items()
	{
		Name = "";
		Description = "";
		QuantityGained = 0;
		StatGain = EStatGain::Health;
		Icon = nullptr;
	}

	FMCS_Items(FString name, FString description, int quantityGained, EStatGain statGain, UTexture2D* icon)
	{
		Name = name;
		Description = description;
		QuantityGained = quantityGained;
		StatGain = statGain;
		Icon = icon;
	}
};

USTRUCT(BlueprintType)
struct MOTHERSCOMBATSYSTEM_API FMCS_Spells
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESpellType SpellType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int BaseStat;

	FMCS_Spells()
	{
		Name = "";
		Description = "";
		SpellType = ESpellType::Team;
		BaseStat = 0;
	}

	FMCS_Spells(FString name, FString description, ESpellType spellType, int baseStat)
	{
		Name = name;
		Description = description;
		SpellType = spellType;
		BaseStat = baseStat;
	}
};
