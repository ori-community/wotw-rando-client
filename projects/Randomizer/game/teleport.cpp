#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/events/task.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/CameraPivotZone.h>
#include <Modloader/app/methods/InstantLoadScenesController.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/RuntimeSceneMetaData.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/modloader.h>
#include <Randomizer/game/teleport.h>

using namespace app::classes;

namespace randomizer::game::teleportation {
    auto teleport_in_progress = false;

    /**
     * We override IsInsideSceneBounds_3 and IsInTotal_1 because in vanilla, these functions
     * check overlaps using < and > operators instead of <= and >=. That causes problems
     * with teleporting to coordinates where at least one of X and Y is exactly on a scene boundary
     * and were hence considered out of bounds by the vanilla game.
     */
    IL2CPP_INTERCEPT(bool, RuntimeSceneMetaData, IsInsideSceneBounds_3, app::RuntimeSceneMetaData * this_ptr, app::Rect rect) {
        for (const auto& boundary: il2cpp::ListIterator(this_ptr->fields.SceneBoundaries)) {
            const auto rect_min = app::Vector2{ rect.m_XMin, rect.m_YMin };
            const auto rect_max = app::Vector2{ rect.m_XMin + rect.m_Width, rect.m_YMin + rect.m_Height };
            const auto boundary_min = app::Vector2{ boundary.m_XMin, boundary.m_YMin };
            const auto boundary_max = app::Vector2{ boundary.m_XMin + boundary.m_Width, boundary.m_YMin + boundary.m_Height };

            if (
                rect_min.x >= boundary_min.x &&
                rect_min.y >= boundary_min.y &&
                rect_max.x <= boundary_max.x &&
                rect_max.y <= boundary_max.y
            ) {
                return true;
            }
        }

        return false;
    }

    IL2CPP_INTERCEPT(bool, RuntimeSceneMetaData, IsInTotal_1, app::RuntimeSceneMetaData * this_ptr, app::Vector3 position) {
        RuntimeSceneMetaData::DoTotal(this_ptr);

        const auto& total = this_ptr->fields.m_totalRect;
        const auto total_min = app::Vector2{ total.m_XMin, total.m_YMin };
        const auto total_max = app::Vector2{ total.m_XMin + total.m_Width, total.m_YMin + total.m_Height };

        return
            position.x >= total_min.x &&
            position.y >= total_min.y &&
            position.x <= total_max.x &&
            position.y <= total_max.y;
    }

    IL2CPP_INTERCEPT(void, InstantLoadScenesController, CompleteLoading, app::InstantLoadScenesController* this_ptr) {
        if (teleport_in_progress) {
            const auto scenes_manager = core::api::scenes::get_scenes_manager();
            modloader::ScopedSetter _(scenes_manager->klass->static_fields->DoExtraSceneCleanUp, false);
            next::InstantLoadScenesController::CompleteLoading(this_ptr);
            teleport_in_progress = false;
        } else {
            next::InstantLoadScenesController::CompleteLoading(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(bool, ScenesManager, UnloadScene, app::ScenesManager * this_ptr, app::SceneManagerScene* scene, bool keep_in_memory, bool instant) {
        if (teleport_in_progress) {
            return false;
        }

        return next::ScenesManager::UnloadScene(this_ptr, scene, keep_in_memory, instant);
    }

    // TODO: Can cause deadlocks, remove usage of InstantLoadScenesController::LoadScenesAtPosition
    void teleport_instantly(const app::Vector3 position) {
        teleport_in_progress = true;

        // We do this because InstantLoadScenesController::LoadScenesAtPosition uses it as the target position
        const auto scenes_manager = core::api::scenes::get_scenes_manager();
        scenes_manager->fields.m_currentCameraTargetPosition.x = position.x;
        scenes_manager->fields.m_currentCameraTargetPosition.y = position.y;

        SeinCharacter::set_Position(core::api::game::player::sein(), position);

        const auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;
        InstantLoadScenesController::LoadScenesAtPosition(instant_load_scenes_controller, nullptr, false, false);

        auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
        auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
        AreaMapNavigation::SetLocationPlayer(area_map_ui->fields._Navigation_k__BackingField);
        QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
    }

    void teleport(const app::Vector2 position) {
        SavePedestalController::BeginTeleportation(position);
    }

    bool is_teleporting() {
        const auto save_pedestal_controller = types::SavePedestalController::get_class()->static_fields->Instance;
        return teleport_in_progress ||
            (save_pedestal_controller != nullptr && (save_pedestal_controller->fields.m_isTeleporting || save_pedestal_controller->fields.m_isBlooming));
    }
}
