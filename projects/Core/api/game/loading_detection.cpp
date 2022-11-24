#include <Core/api/game/player.h>
#include <Core/api/game/loading_detection.h>

#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/methods/Moon/Timeline/FixedDurationSceneEntity.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/System/Action.h>

#include "game.h"
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/ScenesManager.h>

using namespace modloader;
using namespace app::classes;

namespace game::loading_detection {
    auto loading_scene_in_timeline = false;
    auto loading_menus = false;

    IL2CPP_INTERCEPT(Moon::Timeline::FixedDurationSceneEntity, void, LoadScene, (app::FixedDurationSceneEntity* this_ptr, app::IContext* context)) {
        loading_scene_in_timeline = true;
        next::Moon::Timeline::FixedDurationSceneEntity::LoadScene(this_ptr, context);
        loading_scene_in_timeline = false;
    }

    std::set<gchandle> on_menus_loaded_actions;
    IL2CPP_INTERCEPT(System::Action, void, Invoke, (app::Action* this_ptr)) {
        for (const auto& gchandle : on_menus_loaded_actions) {
            auto action = il2cpp::gchandle_target<app::Action>(gchandle);
            if (action == this_ptr) {
                loading_menus = false;
                il2cpp::gchandle_free(gchandle);
                on_menus_loaded_actions.erase(gchandle);
                break;
            }
        }

        next::System::Action::Invoke(this_ptr);
    }

    IL2CPP_INTERCEPT(MenuScreenManager, void, LoadMenus, (app::MenuScreenManager* this_ptr, app::Action* on_menus_loaded)) {
        on_menus_loaded_actions.insert(il2cpp::gchandle_new(on_menus_loaded));
        next::MenuScreenManager::LoadMenus(this_ptr, on_menus_loaded);
    }

    LoadingState get_loading_state() {
        if (loading_scene_in_timeline) {
            return LoadingState::FixedDurationSceneEntityLoading;
        }

        if (loading_menus) {
            return LoadingState::MenusLoading;
        }

        auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

        if (instant_load_scenes_controller == nullptr) {
            return LoadingState::InstantLoadScenesControllerNonexistent;
        }

        if (instant_load_scenes_controller->fields.m_isLoading) {
            return LoadingState::InstantLoadScenesControllerLoading;
        }

        if (instant_load_scenes_controller->fields.m_lockFinishLoading) {
            return LoadingState::InstantLoadScenesControllerLockFinishLoading;
        }

        if (instant_load_scenes_controller->fields.m_entireGameFrozen) {
            return LoadingState::InstantLoadScenesControllerEntireGameFrozen;
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

        auto menu_screen_manager = types::UI::get_class()->static_fields->m_sMenu;

        if (menu_screen_manager == nullptr) {
            return LoadingState::MenuScreenManagerNonexistent;
        }

        if (menu_screen_manager->fields.ShardShopLoading) {
            return LoadingState::ShardShopLoading;
        }

        return LoadingState::NotLoading;
    }
} // namespace game::loading_detector