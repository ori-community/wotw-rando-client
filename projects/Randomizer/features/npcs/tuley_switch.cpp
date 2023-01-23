#include <Modloader/common.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

#include <Randomizer/conditions/new_setup_state_override.h>
#include <Core/uber_states/uber_state_interface.h>

namespace {
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    uber_states::UberState tuley_exists(UberStateGroup::RandoState, 300);
    int32_t tuley_state(app::NewSetupStateController* controller, std::string_view path, int32_t state, int32_t context) {
        return tuley_exists.get<bool>() ? TULEY_EXISTS : TULEY_GONE;
    }

    void initialize_tuley() {
        randomizer::conditions::register_new_setup_intercept({
                                                                     "wellspringGladesHubSetups/interactives/gardenerSetup",
                                                             },
                                                             { TULEY_GONE, TULEY_EXISTS },
                                                             tuley_state);
    }

    CALL_ON_INIT(initialize_tuley);
} // namespace
