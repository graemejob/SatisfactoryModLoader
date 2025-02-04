// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableStorage.h"
#include "FGInventoryComponent.h"

#if WITH_EDITOR
void AFGBuildableStorage::Factory_Tick(float dt){ }
#endif 
#if WITH_EDITOR
#endif 
AFGBuildableStorage::AFGBuildableStorage() : Super() {
	this->mStackingHeight = 0.0;
	this->mInventorySizeX = 4;
	this->mInventorySizeY = 4;
	this->mStorageInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("StorageInventory"));
	this->mForceNetUpdateOnRegisterPlayer = true;
	this->mToggleDormancyOnInteraction = true;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->NetDormancy = ENetDormancy::DORM_Initial;
}
void AFGBuildableStorage::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableStorage::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
void AFGBuildableStorage::Factory_CollectInput_Implementation(){ }
