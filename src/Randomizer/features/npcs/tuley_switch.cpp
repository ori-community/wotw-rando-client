#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    auto& spawn_tuley_state = randomizer::uber_states::state<"randoState", "spawnTuley">();
    auto& use_spawn_tuley_state = randomizer::uber_states::state<"randoConfig", "useSpawnTuleyRandoState">();

    [[maybe_unused]]
    auto uber_state_notify = core::api::uber_states::event_bus().on<core::api::uber_states::events::UberStateChanged>(
        {
            spawn_tuley_state,
            use_spawn_tuley_state,
        },
        [](auto, auto) {
            randomizer::conditions::apply_all_states();
        }
    );

    int32_t tuley_state(app::NewSetupStateController* controller, std::string_view path, int32_t original_state) {
        if (!use_spawn_tuley_state.get()) {
            return original_state;
        }

        return spawn_tuley_state.get() ? TULEY_EXISTS : TULEY_GONE;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        randomizer::conditions::register_new_setup_state_controller_intercept(
            { "wellspringGladesHubSetups/interactives/gardenerSetup" },
            { TULEY_GONE, TULEY_EXISTS },
            tuley_state
        );
    });
} // namespace
