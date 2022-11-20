#include <Core/api/game/player.h>
#include <Core/api/game/loading_detection.h>

#include <Modloader/app/types/InstantLoadScenesController.h>

#include <Modloader/app/methods/ScenesManager.h>
#include <Core/api/scenes/scene_load.h>

using namespace modloader;
using namespace app::classes;

namespace game::loading_detection {
    bool is_loading() {
        auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

        if (instant_load_scenes_controller == nullptr) {
            return true;
        }

        if (instant_load_scenes_controller->fields.m_isLoading) {
            return true;
        }

        auto scenes_manager = scenes::get_scenes_manager();

        if (scenes_manager == nullptr) {
            return true;
        }

        auto position = game::player::get_position();
        if (ScenesManager::PositionInsideSceneStillLoading_2(scenes_manager, position)) {
            return true;
        }

        return false;
    }
} // namespace game::loading_detector