// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePowerStorage.h"

AFGBuildablePowerStorage::AFGBuildablePowerStorage() : Super() {
	this->mBatteryInfo = nullptr;
	this->mBatteryStatus = EBatteryStatus::BS_Idle;
	this->mPowerStore = 0.0;
	this->mPowerStoreCapacity = 0.0;
	this->mPowerInputCapacity = 0.0;
	this->mIndicatorLevelMax = 0;
	this->mIndicatorLevel = 0;
}
void AFGBuildablePowerStorage::BeginPlay(){ }
void AFGBuildablePowerStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGBuildablePowerStorage::Factory_HasPower() const{ return bool(); }
bool AFGBuildablePowerStorage::CanProduce_Implementation() const{ return bool(); }
EProductionStatus AFGBuildablePowerStorage::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
void AFGBuildablePowerStorage::Factory_StartProducing(){ }
void AFGBuildablePowerStorage::Factory_StopProducing(){ }
void AFGBuildablePowerStorage::Factory_TickProducing(float deltaTime){ }
float AFGBuildablePowerStorage::GetPowerStore() const{ return float(); }
float AFGBuildablePowerStorage::GetTimeUntilFull() const{ return float(); }
float AFGBuildablePowerStorage::GetTimeUntilEmpty() const{ return float(); }
float AFGBuildablePowerStorage::GetNetPowerInput() const{ return float(); }
uint8 AFGBuildablePowerStorage::CalculateIndicatorLevel() const{ return uint8(); }
void AFGBuildablePowerStorage::UpdatePropertiesOnGameThread(EBatteryStatus status, uint8 indicatorLevel){ }
void AFGBuildablePowerStorage::UpdateProperties(EBatteryStatus status, uint8 indicatorLevel){ }
AFGReplicationDetailActor_PowerStorage* AFGBuildablePowerStorage::GetCastReplicationDetail() const{ return nullptr; }
void AFGBuildablePowerStorage::OnRep_Status(){ }
void AFGBuildablePowerStorage::OnRep_IndicatorLevel(){ }
