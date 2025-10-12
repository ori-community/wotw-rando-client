#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/conditions/new_setup_state_override.h>

namespace {
    constexpr int32_t TWILLEN_EXISTS = -294171295;
    constexpr int32_t TWILLEN_GONE = -598610927;

    const auto SPAWN_TWILLEN = core::api::uber_states::UberState(UberStateGroup::RandoState, 302);
    const auto USE_SPAWN_TWILLEN_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 32);

    int32_t twillen_state(app::NewSetupStateController* controller, std::string_view path, int32_t original_state) {
        if (!USE_SPAWN_TWILLEN_RANDO_STATE.get<bool>()) {
            return original_state;
        }

        return SPAWN_TWILLEN.get<bool>() ? TWILLEN_EXISTS : TWILLEN_GONE;
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
