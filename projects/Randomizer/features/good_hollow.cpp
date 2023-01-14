#include <conditions/new_setup_state_override.h>
#include <constants.h>

#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

namespace {
    core::api::uber_states::UberState ku_is_alive_state(UberStateGroup::RandoConfig, GOOD_HOLLOW_ID);
    
    auto on_ku_is_alive_changed = core::api::uber_states::single_notification_bus().register_handler(ku_is_alive_state, [](auto state, auto previous_value) {
        randomizer::conditions::apply_all_states();
    });

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/artSetups/darkStateTempPreview" }, { -800036847 }, [](auto, auto, auto original_state, auto) -> int32_t {
            if (ku_is_alive_state.get<bool>()) {
                return 1099423850;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/kwolokSetup" }, { 1353458813 }, [](auto, auto, auto original_state, auto) -> int32_t {
            if (ku_is_alive_state.get<bool>()) {
                return -1414427855;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernThroneRoom/kuOttersSetup" }, { -1747966672 }, [](auto, auto, auto original_state, auto) -> int32_t {
            if (ku_is_alive_state.get<bool>()) {
                return 114866975;
            }

            return original_state;
        });

        randomizer::conditions::register_new_setup_intercept({ "bashIntroductionA__clone0/artSetups/transitionSetup" }, { 1398345545 }, [](auto, auto, auto original_state, auto) -> int32_t {
            if (ku_is_alive_state.get<bool>()) {
                return 1207558822;
            }

            return original_state;
        });
    });
} // namespace
