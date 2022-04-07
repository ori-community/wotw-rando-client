#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <randomizer/conditions/new_setup_state_override.h>
#include <uber_states/uber_state_manager.h>

namespace
{
    constexpr int TULEY_EXISTS_UBER_STATE = 300;
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    int32_t tuley_state(app::NewSetupStateController* controller, std::string_view path, int32_t state, int32_t context) {
        return uber_states::get_uber_state_value(uber_states::constants::RANDO_STATE_GROUP_ID, TULEY_EXISTS_UBER_STATE) > 0.5f ? TULEY_EXISTS : TULEY_GONE;
    }

    void initialize_tuley()
    {
        randomizer::conditions::register_new_setup_intercept({
                "wellspringGladesHubSetups/interactives/gardenerSetup",
            }, { TULEY_GONE, TULEY_EXISTS }, tuley_state
        );
    }

    CALL_ON_INIT(initialize_tuley);
}
