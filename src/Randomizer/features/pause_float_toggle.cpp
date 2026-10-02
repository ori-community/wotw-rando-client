#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/PauseGameAction.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    auto& prevent_pause_floats_state = randomizer::uber_states::state<"randoConfig", "preventPauseFloats">();

    IL2CPP_INTERCEPT(void, PauseGameAction, ResumeGame, app::PauseGameAction* this_ptr) {
        if (prevent_pause_floats_state.get()) {
            const auto previous_velocity = core::api::game::player::get_velocity();
            next::PauseGameAction::ResumeGame(this_ptr);
            core::api::game::player::set_velocity(previous_velocity);
        } else {
            next::PauseGameAction::ResumeGame(this_ptr);
        }
    }
}
