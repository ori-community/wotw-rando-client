#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    auto is_in_menu_screen_manager_show_menu_screen = false;

    core::api::uber_states::UberState fix_enabled_state(UberStateGroup::RandoConfig, 16);

    IL2CPP_INTERCEPT_WITH_ORDER(-10, void, MenuScreenManager, ShowMenuScreen, app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen, bool immediate, bool play_sound, bool pause) {
        modloader::ScopedSetter _(is_in_menu_screen_manager_show_menu_screen, true);
        next::MenuScreenManager::ShowMenuScreen(this_ptr, screen, immediate, play_sound, pause);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(-100, void, MenuScreenManager, ChangeScreen, app::MenuScreenManager * this_ptr, app::MenuScreenManager_Screens__Enum screen) {
        if (
            (
                screen == app::MenuScreenManager_Screens__Enum::ShardUpgradeShop ||
                screen == app::MenuScreenManager_Screens__Enum::ShardsShop
            ) &&
            this_ptr->fields.CurrentScreen == app::MenuScreenManager_Screens__Enum::None &&
            !is_in_menu_screen_manager_show_menu_screen &&
            fix_enabled_state.get<bool>()
        ) {
            return;
        }

        next::MenuScreenManager::ChangeScreen(this_ptr, screen);
    }
}
