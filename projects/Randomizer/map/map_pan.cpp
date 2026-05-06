#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

#include "Core/api/game/player.h"

namespace {
    using namespace app::classes;

    auto is_handling_map_scrolling = false;
    app::Vector2 last_non_void_player_map_position{};

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

    [[maybe_unused]]
    auto on_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        const auto player_position = core::api::game::player::get_map_position();

        if (  // Approximately the map rectangle
            player_position.x > -2197 &&
            player_position.x < 2580 &&
            player_position.y > -4800 &&
            player_position.y < -3300
        ) {
            last_non_void_player_map_position = core::api::game::player::get_map_position();
        }
    });

    IL2CPP_INTERCEPT(void, AreaMapNavigation, SetLocationPlayer, app::AreaMapNavigation* this_ptr) {
        this_ptr->fields.m_scrollPosition = last_non_void_player_map_position;
        this_ptr->fields.m_fromPosition = last_non_void_player_map_position;
        this_ptr->fields.m_toPosition = last_non_void_player_map_position;
    }
}
