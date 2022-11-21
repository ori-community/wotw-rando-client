#pragma once

#include <nlohmann/json.hpp>

enum class LoadingState {
    NotLoading,
    FixedDurationSceneEntityLoading,
    InstantLoadScenesControllerNonexistent,
    InstantLoadScenesControllerLoading,
    ScenesManagerNonexistent,
    ScenesManagerLoading,
    GameControllerNonexistent,
    GameControllerLoading,
    PositionInsideSceneStillLoading,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        LoadingState,
        {
                { LoadingState::NotLoading, "NotLoading" },
                { LoadingState::FixedDurationSceneEntityLoading, "FixedDurationSceneEntityLoading" },
                { LoadingState::InstantLoadScenesControllerNonexistent, "InstantLoadScenesControllerNonexistent" },
                { LoadingState::InstantLoadScenesControllerLoading, "InstantLoadScenesControllerLoading" },
                { LoadingState::ScenesManagerNonexistent, "ScenesManagerNonexistent" },
                { LoadingState::ScenesManagerLoading, "ScenesManagerLoading" },
                { LoadingState::GameControllerNonexistent, "GameControllerNonexistent" },
                { LoadingState::GameControllerLoading, "GameControllerLoading" },
                { LoadingState::PositionInsideSceneStillLoading, "PositionInsideSceneStillLoading" },
        }
);
