// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class WeaponFiringType : uint8
{
	SINGLE_SHOT,
	TRIPLE_SHOT,
	AUTOMATIC
};