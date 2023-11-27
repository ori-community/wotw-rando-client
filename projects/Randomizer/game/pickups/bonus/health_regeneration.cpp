#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GameStateMachine.h>

#include <vector>

namespace {
    constexpr float HEALTH_REGENERATION_MODIFIER = 0.168f;

    // TODO: change the uberstate so regen rate is defined in header.
    core::api::uber_states::UberState health_regeneration(4, 30);
    auto update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (!app::classes::GameStateMachine::get_IsGame()) {
            return;
        }

        auto regen = health_regeneration.get();
        if (regen > 0) {
            core::api::game::player::health().add(regen * core::api::game::delta_time() * HEALTH_REGENERATION_MODIFIER);
        }
    });
} // namespace
