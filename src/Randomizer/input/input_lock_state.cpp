#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/GameController.h>

namespace {
    auto& lock_state = randomizer::uber_states::state<"player", "inputLocked">();

    IL2CPP_INTERCEPT_WITH_ORDER(5, bool, GameController, get_InputLocked, app::GameController* this_ptr) {
        if (lock_state.get()) {
            return true;
        }

        return next::GameController::get_InputLocked(this_ptr);
    }
}
