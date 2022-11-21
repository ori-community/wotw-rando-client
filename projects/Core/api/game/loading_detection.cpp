#include <Core/api/game/player.h>
#include <Core/api/game/loading_detection.h>

#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/methods/Moon/Timeline/FixedDurationSceneEntity.h>

#include "game.h"
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/ScenesManager.h>

using namespace modloader;
using namespace app::classes;

namespace game::loading_detection {
    auto loading_scene_in_timeline = false;
    IL2CPP_INTERCEPT(Moon::Timeline::FixedDurationSceneEntity, void, LoadScene, (app::FixedDurationSceneEntity* this_ptr, app::IContext* context)) {
        loading_scene_in_timeline = true;
        next::Moon::Timeline::FixedDurationSceneEntity::LoadScene(this_ptr, context);
        loading_scene_in_timeline = false;
    }

    LoadingState get_loading_state() {
        if (loading_scene_in_timeline) {
            return LoadingState::FixedDurationSceneEntityLoading;
        }

        auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

        if (instant_load_scenes_controller == nullptr) {
            return LoadingState::InstantLoadScenesControllerNonexistent;
        }

        if (instant_load_scenes_controller->fields.m_isLoading) {
            return LoadingState::InstantLoadScenesControllerLoading;
        }

        auto scenes_manager = scenes::get_scenes_manager();

        if (scenes_manager == nullptr) {
            return LoadingState::ScenesManagerNonexistent;
        }

        auto game_controller = game::controller();

        if (game_controller == nullptr) {
            return LoadingState::GameControllerNonexistent;
        }

        if (game_controller->fields.m_isLoadingGame) {
            return LoadingState::GameControllerLoading;
        }

        auto position = game::player::get_position();
        if (ScenesManager::PositionInsideSceneStillLoading_2(scenes_manager, position)) {
            return LoadingState::PositionInsideSceneStillLoading;
        }

        return LoadingState::NotLoading;
    }
} // namespace game::loading_detector