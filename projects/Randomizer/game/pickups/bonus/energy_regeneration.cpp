#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GameStateMachine.h>

namespace {
    core::api::uber_states::UberState energy_regeneration_per_minute(UberStateGroup::RandoUpgrade, 31);

    [[maybe_unused]]
    auto update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (!GameStateMachine::get_IsGame()) {
            return;
        }

        const auto regeneration_value = energy_regeneration_per_minute.get();
        if (regeneration_value > 0) {
            core::api::game::player::energy().add(regeneration_value / 60.0 * core::api::game::delta_time());
        }
    });
} // namespace
