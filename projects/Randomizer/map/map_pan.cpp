#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    auto is_handling_map_scrolling = false;

    IL2CPP_INTERCEPT_WITH_ORDER(0, float, UnityEngine::AnimationCurve, Evaluate, app::AnimationCurve* this_ptr, float time) {
        if (is_handling_map_scrolling) {
            return next::UnityEngine::AnimationCurve::Evaluate(this_ptr, time) * core::settings::map_pan_speed();
        }

        return next::UnityEngine::AnimationCurve::Evaluate(this_ptr, time);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(-10, void, AreaMapNavigation, HandleMapScrolling, app::AreaMapNavigation* this_ptr) {
        modloader::ScopedSetter _(is_handling_map_scrolling, true);
        next::AreaMapNavigation::HandleMapScrolling(this_ptr);
    }
}
