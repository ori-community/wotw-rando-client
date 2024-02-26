#include <Common/ext.h>

#include <Modloader/app/methods/FaderB.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/MenuScreenManager__PostFadeMenuOpen_d__100.h>
#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/app/methods/CleverMenuItemSelectionManager.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;
using namespace modloader;

namespace core::api {
    namespace {
        bool skip_fade_to_black = false;  // Skip fade to black when opening menus
        bool disable_menu_selection_navigation = false;  // Disables navigation in CleverMenuItemSelectionManager, see below

        IL2CPP_INTERCEPT(FaderB, void, Fade, (app::FaderB * this_ptr, float fadeInDuration, float fadeStayDuration, float fadeOutDuration, app::Action *fadeInComplete, app::Action *fadeOutComplete, bool skipCameraMoveToTarget)) {
            if (!skip_fade_to_black) {
                next::FaderB::Fade(this_ptr, fadeInDuration, fadeStayDuration, fadeOutDuration, fadeInComplete, fadeOutComplete, skipCameraMoveToTarget);
            }
        }

        /**
         * In vanilla, there's a 100ms WaitForSeconds coroutine running before opening the menu.
         * We skip that by advancing the coroutine enumerator twice.
         */
        IL2CPP_INTERCEPT(MenuScreenManager__PostFadeMenuOpen_d__100, bool, MoveNext, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr)) {
            ScopedSetter setter(skip_fade_to_black, true);
            next::MenuScreenManager__PostFadeMenuOpen_d__100::MoveNext(this_ptr);
            return next::MenuScreenManager__PostFadeMenuOpen_d__100::MoveNext(this_ptr);
        }

        IL2CPP_INTERCEPT(FaderB, void, ExecuteGCIfNeeded, (app::FaderB* this_ptr)) {
            if (Game::UI::get_Menu()->fields.m_isPaused) {
                return;
            }

            next::FaderB::ExecuteGCIfNeeded(this_ptr);
        }

        IL2CPP_INTERCEPT(UberGCManager, void, OnCleanupOutsideOfGameplay, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger)) {
            if (trigger == app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum::SpiritShardsScreen || trigger == app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum::GameMapUI ||
                trigger == app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum::InventoryScreen2) {
                return;
            }

            next::UberGCManager::OnCleanupOutsideOfGameplay(trigger);
        }


        /**
         * Prevent menu navigation when Up or Down is pressed at the same time a menu dialog pops up.
         * This primarily makes QTMs more consistent since you don't end up on the "Cancel" button
         * when entering the "Exit Game" dialog while still holding Up or Down.
         *
         * This is a port of the fix for Blind Forest by Kirefel
         * https://github.com/Kirefel/OriDeQol/blob/a3c3c3f114731454cfa2ae01db513a1570027bbf/KFT.OriBF.Qol/QTMBugfix.cs
         */

        IL2CPP_INTERCEPT(CleverMenuItemSelectionManager, void, Start, (app::CleverMenuItemSelectionManager* this_ptr)) {
            const auto menu_up_pressed = types::Input_Cmd::get_class()->static_fields->MenuUp->fields.IsPressed;
            const auto menu_down_pressed = types::Input_Cmd::get_class()->static_fields->MenuDown->fields.IsPressed;

            // Disable menu navigation if Up or Down is pressed
            disable_menu_selection_navigation = menu_up_pressed || menu_down_pressed;

            next::CleverMenuItemSelectionManager::Start(this_ptr);
        }

        IL2CPP_INTERCEPT(CleverMenuItemSelectionManager, void, FixedUpdate, (app::CleverMenuItemSelectionManager* this_ptr)) {
            const auto menu_up_pressed = types::Input_Cmd::get_class()->static_fields->MenuUp->fields.IsPressed;
            const auto menu_down_pressed = types::Input_Cmd::get_class()->static_fields->MenuDown->fields.IsPressed;

            // Re-enable menu navigation once neither Up nor Down is pressed anymore
            if (
                CleverMenuItemSelectionManager::get_IsActive(this_ptr) &&
                disable_menu_selection_navigation &&
                !menu_up_pressed &&
                !menu_down_pressed
            ) {
                disable_menu_selection_navigation = false;
            }

            next::CleverMenuItemSelectionManager::FixedUpdate(this_ptr);
        }

        IL2CPP_INTERCEPT(CleverMenuItemSelectionManager, void, MoveSelection, (app::CleverMenuItemSelectionManager* this_ptr, bool forward, int step)) {
            if (!disable_menu_selection_navigation) {
                next::CleverMenuItemSelectionManager::MoveSelection(this_ptr, forward, step);
            }
        }
    } // namespace
} // namespace core::api
