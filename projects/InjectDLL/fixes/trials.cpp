#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <csharp_bridge.h>

namespace
{
    NAMED_IL2CPP_INTERCEPT_OVERLOAD(Moon.Race, LeaderBoardService, void, UploadReplay, UpdateReplayTrial,
        (app::LeaderBoardService* this_ptr, app::String race_id, float duration, app::String replay_data, app::ITrialData trial_data),
        (System:String, System:Single, System:String, Moon.Race:ITrialData))
    {
        // NOOP
    }

    NAMED_IL2CPP_INTERCEPT_OVERLOAD(Moon.Race, LeaderBoardService, void, UploadReplay, UpdateReplayValidation,
        (app::LeaderBoardService* this_ptr, app::String race_id, float duration, app::String replay_data, app::ReplayValidatorData trial_data),
        (System:String, System:Single, System:String, Moon.Race:ReplayValidatorData))
    {
        // NOOP
    }

    STATIC_IL2CPP_INTERCEPT(Moon.Race.Networking, WebService, void, UploadData, (app::String* site_id, app::ReplayData* data)) {
        // NOOP
    }

    IL2CPP_INTERCEPT(, RaceHandler, void, SetRaceInProgressState, (app::RaceHandler* this_ptr, bool in_progress)) {
        if (in_progress)
            csharp_bridge::on_race_start();
        else
            csharp_bridge::on_race_end();

        RaceHandler::SetRaceInProgressState(this_ptr, in_progress);
    }
}
