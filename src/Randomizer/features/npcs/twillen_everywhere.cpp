#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    constexpr int32_t TWILLEN_EXISTS = -294171295;
    constexpr int32_t TWILLEN_GONE = -598610927;

    auto& spawn_twillen_state = randomizer::uber_states::state<"randoState", "spawnTwillenEverywhere">();
    auto& use_spawn_twillen_state = randomizer::uber_states::state<"randoConfig", "useSpawnTwillenEverywhereRandoState">();

    [[maybe_unused]]
    auto uber_state_notify = core::api::uber_states::on_uber_state_changed().register_handlers(
        std::vector<std::tuple<core::api::uber_states::UntypedUberId>> {
            spawn_twillen_state.get_uber_id(),
            use_spawn_twillen_state.get_uber_id(),
        },
        [](auto) {
            randomizer::conditions::apply_all_states();
        }
    );

    int32_t twillen_state(app::NewSetupStateController* controller, std::string_view path, int32_t original_state) {
        if (!use_spawn_twillen_state.get()) {
            return original_state;
        }

        return spawn_twillen_state.get() ? TWILLEN_EXISTS : TWILLEN_GONE;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept(
            { "kwoloksHollowEntrance/interactives/shardTraderSetup" },
            { TWILLEN_GONE, TWILLEN_EXISTS },
            twillen_state
        );
    });
} // namespace
