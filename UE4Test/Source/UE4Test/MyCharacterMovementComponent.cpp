// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacterMovementComponent.h"

FVector UMyCharacterMovementComponent::ComputeSlideVector(const FVector& Delta
	, const float Time
	, const FVector& Normal
	, const FHitResult& Hit) const
{
	return Super::ComputeSlideVector(Delta, Time, Normal, Hit);
}
