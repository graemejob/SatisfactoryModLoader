// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableLadder.h"
#include "Components/SceneComponent.h"
#include "FGLadderComponent.h"
#include "Hologram/FGLadderHologram.h"

AFGBuildableLadder::AFGBuildableLadder() : Super() {
	this->mWidth = 0.0;
	this->mMeshHeight = 0.0;
	this->mLadderSegmentMesh = nullptr;
	this->mMaxSegmentCount = 1;
	this->mNumSegments = 0;
	this->mClearanceBox = nullptr;
	this->mFrontLadderComponent = CreateDefaultSubobject<UFGLadderComponent>(TEXT("Front Ladder Component"));
	this->mBackLadderComponent = CreateDefaultSubobject<UFGLadderComponent>(TEXT("Back Ladder Component"));
	this->mHologramClass = AFGLadderHologram::StaticClass();
	this->mFrontLadderComponent->SetupAttachment(RootComponent);
	this->mBackLadderComponent->SetupAttachment(RootComponent);
}
void AFGBuildableLadder::BeginPlay(){ }
void AFGBuildableLadder::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
int32 AFGBuildableLadder::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableLadder::SetNumSegments(int32 Num, bool ForceUpdate){ }
void AFGBuildableLadder::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableLadder::OnRep_NumSegments(){ }
