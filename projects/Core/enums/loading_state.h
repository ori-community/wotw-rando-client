#pragma once

#include <nlohmann/json.hpp>

enum class LoadingState {
    NotLoading,
    InstantLoadScenesControllerNonexistent,
    InstantLoadScenesControllerLoading,
    InstantLoadScenesControllerLockFinishLoading,
    InstantLoadScenesControllerEntireGameFrozen,
    ScenesManagerNonexistent,
    ScenesManagerLoading,
    GameControllerNonexistent,
    GameControllerLoading,
    PositionInsideSceneStillLoading,
    MenuScreenManagerNonexistent,
    MenusLoading,
    ShardShopLoading,
    UberGC,
    DestroyManagerDestroying,
    FaderB,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        LoadingState,
        {
                { LoadingState::NotLoading, "NotLoading" },
                { LoadingState::InstantLoadScenesControllerNonexistent, "InstantLoadScenesControllerNonexistent" },
                { LoadingState::InstantLoadScenesControllerLoading, "InstantLoadScenesControllerLoading" },
                { LoadingState::InstantLoadScenesControllerLockFinishLoading, "InstantLoadScenesControllerLockFinishLoading" },
                { LoadingState::InstantLoadScenesControllerEntireGameFrozen, "InstantLoadScenesControllerEntireGameFrozen" },
                { LoadingState::ScenesManagerNonexistent, "ScenesManagerNonexistent" },
                { LoadingState::ScenesManagerLoading, "ScenesManagerLoading" },
                { LoadingState::GameControllerNonexistent, "GameControllerNonexistent" },
                { LoadingState::GameControllerLoading, "GameControllerLoading" },
                { LoadingState::PositionInsideSceneStillLoading, "PositionInsideSceneStillLoading" },
                { LoadingState::MenuScreenManagerNonexistent, "MenuScreenManagerNonexistent" },
                { LoadingState::MenusLoading, "MenusLoading" },
                { LoadingState::ShardShopLoading, "ShardShopLoading" },
                { LoadingState::UberGC, "UberGC" },
                { LoadingState::DestroyManagerDestroying, "DestroyManagerDestroying" },
                { LoadingState::FaderB, "FaderB" },
        }
);
