#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Core/api/game/player.h>


namespace {
    using namespace app::classes;

    auto is_handling_map_scrolling = false;
    app::Vector3 last_non_void_player_map_position{};

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

    IL2CPP_INTERCEPT(app::Vector3, SeinCharacter, get_MapDisplayPosition, app::SeinCharacter* this_ptr) {
        const auto original_map_position = next::SeinCharacter::get_MapDisplayPosition(this_ptr);

        if (  // Approximately the map rectangle
            original_map_position.x > -2197 &&
            original_map_position.x < 2580 &&
            original_map_position.y > -4800 &&
            original_map_position.y < -3300
        ) {
            last_non_void_player_map_position = original_map_position;
        }

        return last_non_void_player_map_position;
    }

    [[maybe_unused]]
    auto on_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        // To force update last_non_void_player_map_position
        core::api::game::player::get_map_position();
    });
}
