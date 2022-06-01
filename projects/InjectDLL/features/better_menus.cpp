#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <enums/game_event.h>
#include <event_bus.h>
#include <game/game.h>
#include <uber_states/uber_state_helper.h>

using namespace modloader;
using modloader::console::console_send;
using modloader::console::console_flush;

namespace
{
    // Skip fade to black when opening menus
    bool skip_fade_to_black = false;

    IL2CPP_INTERCEPT(, FaderB, void, Fade, (
            app::FaderB * this_ptr, float fadeInDuration, float fadeStayDuration, float fadeOutDuration, app::Action * fadeInComplete,
            app::Action * fadeOutComplete, bool skipCameraMoveToTarget
    )) {
        if (!skip_fade_to_black)
            FaderB::Fade(this_ptr, fadeInDuration, fadeStayDuration, fadeOutDuration, fadeInComplete, fadeOutComplete, skipCameraMoveToTarget);
    }

    /**
     * In vanilla, there's a 100ms WaitForSeconds coroutine running before opening the menu.
     * We skip that by advancing the coroutine enumerator twice.
     */
    INTERNAL_INTERCEPT(0x9E65B0, bool, MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr)) {
        ScopedSetter setter(skip_fade_to_black, true);
        MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext(this_ptr);
        return MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext(this_ptr);
    }
}