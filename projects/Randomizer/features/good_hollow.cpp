#include <Randomizer/conditions/new_setup_state_override.h>
#include <Core/uber_states/uber_state_interface.h>
#include <Modloader/common.h>
#include <Randomizer/constants.h>

namespace {
    uber_states::UberState ku_is_alive_state(UberStateGroup::RandoConfig, GOOD_HOLLOW_ID);

    void initialize() {
        uber_states::register_value_notify([](auto state, auto previous_value) {
            if (state == ku_is_alive_state) {
                randomizer::conditions::apply_all_states();
            }
        });

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
    }

    CALL_ON_INIT(initialize);
} // namespace
