// Mario Agostinho

#include "Items/Weapons/WarriorWeaponBase.h"

#include "Components/BoxComponent.h"

AWarriorWeaponBase::AWarriorWeaponBase()
{
	// Components
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	SetRootComponent(WeaponMesh);

	WeaponCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponCollisionBox"));
	WeaponCollisionBox->SetupAttachment(GetRootComponent());
	WeaponCollisionBox->SetBoxExtent(FVector(2.f));
	WeaponCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	// Defaults
	PrimaryActorTick.bCanEverTick = false;
}


