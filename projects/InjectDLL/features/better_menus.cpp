#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    // Skip fade to black when opening menus
    bool skip_fade_to_black = false;

    IL2CPP_INTERCEPT(, MenuScreenManager, void, ShowMenuScreen,
                       (app::MenuScreenManager * this_ptr, app::MenuScreenManager_Screens__Enum screen, bool immediate, bool playSound, bool pause)) {
        MenuScreenManager::ShowMenuScreen(this_ptr, screen, immediate, playSound, pause);
    }

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

    IL2CPP_BINDING(, MenuScreenManager, void, LoadMenus, (app::MenuScreenManager* this_ptr, app::Action* onMenusLoaded))
    IL2CPP_INTERCEPT(, MenuScreenManager, void, RemoveGameplayObjects, (app::MenuScreenManager* this_ptr)) {
        // This unloads menus, so we just load them again immediately
        MenuScreenManager::RemoveGameplayObjects(this_ptr);
        MenuScreenManager::LoadMenus(this_ptr, nullptr);
    }
}