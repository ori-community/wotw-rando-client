#include <randomizer.h>

#include <Modloader/app/methods/RaceHandler.h>
#include <Modloader/interception_macros.h>

bool is_in_trial = false;

namespace {
    IL2CPP_INTERCEPT(RaceHandler, void, SetRaceInProgressState, (app::RaceHandler * this_ptr, bool in_progress)) {
        is_in_trial = in_progress;
        randomizer::game_seed().prevent_grants(is_in_trial);
        next::RaceHandler::SetRaceInProgressState(this_ptr, in_progress);
    }
} // namespace
