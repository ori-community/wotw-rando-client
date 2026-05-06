#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/CameraPivotZone.h>
#include <Modloader/app/methods/InstantLoadScenesController.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/RuntimeSceneMetaData.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/teleport.h>

using namespace app::classes;

namespace randomizer::game::teleportation {
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

    void teleport_instantly(const app::Vector3 position) {
        // We do this because InstantLoadScenesController::LoadScenesAtPosition uses it as the target position
        const auto scenes_manager = core::api::scenes::get_scenes_manager();
        scenes_manager->fields.m_currentCameraTargetPosition.x = position.x;
        scenes_manager->fields.m_currentCameraTargetPosition.y = position.y;

        SeinCharacter::set_Position(core::api::game::player::sein(), position);

        auto scene_names = core::api::scenes::get_scenes_at_position(position);
        for (const auto& scene_name: scene_names) {
            if (!core::api::scenes::scene_is_loaded(scene_name)) {
                const auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;
                InstantLoadScenesController::LoadScenesAtPosition(instant_load_scenes_controller, nullptr, false, false);
                break;
            }
        }

        auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
        auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
        AreaMapNavigation::SetLocationPlayer(area_map_ui->fields._Navigation_k__BackingField);
        QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
    }

    void teleport(const app::Vector2 position) {
        randomizer::features::wheel::force_hide_wheel();
        const auto menu_screen_manager = types::UI::get_class()->static_fields->m_sMenu;
        MenuScreenManager::HideMenuScreen(menu_screen_manager, false, true);

        SavePedestalController::BeginTeleportation(position);
    }
}
