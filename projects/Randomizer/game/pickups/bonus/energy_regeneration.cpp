#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GameStateMachine.h>

#include <vector>

using namespace app::classes;

namespace {
    constexpr float ENERGY_REGENERATION_MODIFIER = 0.0168f;

    // TODO: change the uberstate so regen rate is defined in header.
    core::api::uber_states::UberState energy_regeneration(4, 31);
    auto update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (!GameStateMachine::get_IsGame()) {
            return;
        }

        const auto regen = energy_regeneration.get();
        if (regen > 0) {
            core::api::game::player::energy().add(regen * core::api::game::delta_time() * ENERGY_REGENERATION_MODIFIER);
        }
    });
} // namespace
