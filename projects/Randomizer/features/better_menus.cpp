#include <Common/ext.h>

#include <Modloader/app/methods/FaderB.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/MenuScreenManager__PostFadeMenuOpen_d__100.h>
#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;
using namespace modloader;
using modloader::win::console::console_flush;
using modloader::win::console::console_send;

namespace core::api {
    namespace {
        // Skip fade to black when opening menus
        bool skip_fade_to_black = false;

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
    } // namespace
} // namespace core::api
