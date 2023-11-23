#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/conditions/new_setup_state_override.h>

namespace {
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    core::api::uber_states::UberState tuley_exists(UberStateGroup::RandoState, 300);
    int32_t tuley_state(app::NewSetupStateController* controller, std::string_view path, int32_t state, int32_t context) {
        return tuley_exists.get<bool>() ? TULEY_EXISTS : TULEY_GONE;
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept(
            { "wellspringGladesHubSetups/interactives/gardenerSetup" },
            { TULEY_GONE, TULEY_EXISTS },
            tuley_state
        );
    });
} // namespace
