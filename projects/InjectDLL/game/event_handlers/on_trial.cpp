#include <Il2CppModLoader/interception_macros.h>

#include <interop/csharp_bridge.h>

bool is_in_trial = false;

namespace {
    IL2CPP_INTERCEPT(, RaceHandler, void, SetRaceInProgressState, (app::RaceHandler * this_ptr, bool in_progress)) {
        is_in_trial = in_progress;
        if (in_progress)
            csharp_bridge::on_race_start();
        else
            csharp_bridge::on_race_end();

        RaceHandler::SetRaceInProgressState(this_ptr, in_progress);
    }
} // namespace
