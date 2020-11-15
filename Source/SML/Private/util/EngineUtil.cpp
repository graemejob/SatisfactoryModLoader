﻿#include "Util/EngineUtil.h"
#if WITH_EDITOR
#include "Editor.h"
#endif

//Inspired by UAssetManager::GetTimerManager()
FTimerManager* FEngineUtil::GetGlobalTimerManager() {
#if WITH_EDITOR
    if (GEditor) {
        //In editor use the editor manager
        if (GEditor->IsTimerManagerValid()) {
            return &GEditor->GetTimerManager().Get();
        }
    } else
#endif
    {
        //Otherwise we should always have a game instance

        //This loop will never return NULL because even before Menu world is loaded,
        //once UGameInstance is allocated, it makes sure there is a Game world context
        //and dummy world created, so world will exist even before initial GEngine->Browse is called
        const TIndirectArray<FWorldContext>& WorldContexts = GEngine->GetWorldContexts();
        for (const FWorldContext& WorldContext : WorldContexts) {
            if (WorldContext.WorldType == EWorldType::Game && WorldContext.OwningGameInstance) {
                return &WorldContext.OwningGameInstance->GetTimerManager();
            }
        }
    }
    // This will only hit in very early startup
    return nullptr;    
}
