#pragma once

#include <nlohmann/json.hpp>

enum class AsyncLoadingState {
    NotLoading,
    InstantLoadScenesControllerNonexistent,
    InstantLoadScenesControllerLoading,
    InstantLoadScenesControllerEntireGameFrozen,
    ScenesManagerNonexistent,
    GameControllerNonexistent,
    GameControllerLoading,
    PositionInsideSceneStillLoading,
    MenuScreenManagerNonexistent,
    FaderB,
    GameStateMachineNonexistent,
    WaitingForLoadingFinishedCondition,
    SavePedestalControllerNonexistent,
    SavePedestalControllerWaiting,
    LegacyQTM,
    TitleScreenWaiting,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        AsyncLoadingState,
        {
                { AsyncLoadingState::NotLoading, "NotLoading" },
                { AsyncLoadingState::InstantLoadScenesControllerNonexistent, "InstantLoadScenesControllerNonexistent" },
                { AsyncLoadingState::InstantLoadScenesControllerLoading, "InstantLoadScenesControllerLoading" },
                { AsyncLoadingState::InstantLoadScenesControllerEntireGameFrozen, "InstantLoadScenesControllerEntireGameFrozen" },
                { AsyncLoadingState::ScenesManagerNonexistent, "ScenesManagerNonexistent" },
                { AsyncLoadingState::GameControllerNonexistent, "GameControllerNonexistent" },
                { AsyncLoadingState::GameControllerLoading, "GameControllerLoading" },
                { AsyncLoadingState::PositionInsideSceneStillLoading, "PositionInsideSceneStillLoading" },
                { AsyncLoadingState::MenuScreenManagerNonexistent, "MenuScreenManagerNonexistent" },
                { AsyncLoadingState::FaderB, "FaderB" },
                { AsyncLoadingState::GameStateMachineNonexistent, "GameStateMachineNonexistent" },
                { AsyncLoadingState::WaitingForLoadingFinishedCondition, "WaitingForLoadingFinishedCondition" },
                { AsyncLoadingState::SavePedestalControllerNonexistent, "SavePedestalControllerNonexistent" },
                { AsyncLoadingState::SavePedestalControllerWaiting, "SavePedestalControllerWaiting" },
                { AsyncLoadingState::LegacyQTM, "LegacyQTM" },
                { AsyncLoadingState::TitleScreenWaiting, "TitleScreenWaiting" },
        }
);
