#pragma once

#include <nlohmann/json.hpp>

enum class LoadingState {
    NotLoading,
    InstantLoadScenesControllerNonexistent,
    InstantLoadScenesControllerLoading,
    InstantLoadScenesControllerEntireGameFrozen,
    ScenesManagerNonexistent,
    ScenesManagerLoading,
    GameControllerNonexistent,
    GameControllerLoading,
    PositionInsideSceneStillLoading,
    MenuScreenManagerNonexistent,
    MenusLoading,
    UberGC,
    DestroyManagerDestroying,
    FaderB,
    GameStateMachineNonexistent,
    WaitingForLoadingFinishedCondition,
    LoadGameActionPerforming,
    SavePedestalControllerNonexistent,
    SavePedestalControllerWaiting,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        LoadingState,
        {
                { LoadingState::NotLoading, "NotLoading" },
                { LoadingState::InstantLoadScenesControllerNonexistent, "InstantLoadScenesControllerNonexistent" },
                { LoadingState::InstantLoadScenesControllerLoading, "InstantLoadScenesControllerLoading" },
                { LoadingState::InstantLoadScenesControllerEntireGameFrozen, "InstantLoadScenesControllerEntireGameFrozen" },
                { LoadingState::ScenesManagerNonexistent, "ScenesManagerNonexistent" },
                { LoadingState::ScenesManagerLoading, "ScenesManagerLoading" },
                { LoadingState::GameControllerNonexistent, "GameControllerNonexistent" },
                { LoadingState::GameControllerLoading, "GameControllerLoading" },
                { LoadingState::PositionInsideSceneStillLoading, "PositionInsideSceneStillLoading" },
                { LoadingState::MenuScreenManagerNonexistent, "MenuScreenManagerNonexistent" },
                { LoadingState::MenusLoading, "MenusLoading" },
                { LoadingState::UberGC, "UberGC" },
                { LoadingState::DestroyManagerDestroying, "DestroyManagerDestroying" },
                { LoadingState::FaderB, "FaderB" },
                { LoadingState::GameStateMachineNonexistent, "GameStateMachineNonexistent" },
                { LoadingState::WaitingForLoadingFinishedCondition, "WaitingForLoadingFinishedCondition" },
                { LoadingState::LoadGameActionPerforming, "LoadGameActionPerforming" },
                { LoadingState::SavePedestalControllerNonexistent, "SavePedestalControllerNonexistent" },
                { LoadingState::SavePedestalControllerWaiting, "SavePedestalControllerWaiting" },
        }
);
