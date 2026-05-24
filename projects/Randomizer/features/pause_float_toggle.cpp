#include <Modloader/app/methods/PauseGameAction.h>

#include "Core/api/game/player.h"
#include "Core/api/uber_states/uber_state.h"

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState PREVENT_PAUSE_FLOATS_STATE(UberStateGroup::RandoConfig, 37);

    IL2CPP_INTERCEPT(void, PauseGameAction, ResumeGame, app::PauseGameAction* this_ptr) {
        if (PREVENT_PAUSE_FLOATS_STATE.get<bool>()) {
            const auto previous_velocity = core::api::game::player::get_velocity();
            next::PauseGameAction::ResumeGame(this_ptr);
            core::api::game::player::set_velocity(previous_velocity);
        } else {
            next::PauseGameAction::ResumeGame(this_ptr);
        }
    }
}
