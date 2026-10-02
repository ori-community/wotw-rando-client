#include <Core/api/uber_states/uber_state_handlers.h>
#include <Modloader/modloader.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    auto& ku_is_alive_state = randomizer::uber_states::state<"randoConfig", "goodHollow">();

    [[maybe_unused]]
    auto on_ku_is_alive_changed = core::api::uber_states::on_uber_state_changed().register_handler(ku_is_alive_state, [](auto) {
        randomizer::conditions::apply_all_states();
    });

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/artSetups/darkStateTempPreview" }, { -800036847 }, [](auto, auto, auto original_state) -> int32_t {
            if (ku_is_alive_state.get()) {
                return 1099423850;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/kwolokSetup" }, { 1353458813 }, [](auto, auto, auto original_state) -> int32_t {
            if (ku_is_alive_state.get()) {
                return -1414427855;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/kuOttersSetup" }, { -1747966672 }, [](auto, auto, auto original_state) -> int32_t {
            if (ku_is_alive_state.get()) {
                return 114866975;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "bashIntroductionA__clone0/artSetups/transitionSetup" }, { 1398345545 }, [](auto, auto, auto original_state) -> int32_t {
            if (ku_is_alive_state.get()) {
                return 1207558822;
            }

            return original_state;
        });
    });
} // namespace
