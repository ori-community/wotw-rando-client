#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/conditions/new_setup_state_override.h>

namespace {
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    const auto SPAWN_TULEY = core::api::uber_states::UberState(UberStateGroup::RandoState, 300);
    const auto USE_SPAWN_TULEY_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 30);

    int32_t tuley_state(app::NewSetupStateController* controller, std::string_view path, int32_t original_state) {
        if (!USE_SPAWN_TULEY_RANDO_STATE.get<bool>()) {
            return original_state;
        }

        return SPAWN_TULEY.get<bool>() ? TULEY_EXISTS : TULEY_GONE;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept(
            { "wellspringGladesHubSetups/interactives/gardenerSetup" },
            { TULEY_GONE, TULEY_EXISTS },
            tuley_state
        );
    });
} // namespace
