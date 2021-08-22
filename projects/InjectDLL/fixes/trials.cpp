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

    IL2CPP_INTERCEPT(, RaceHandler, void, OnStart, (app::RaceHandler* this_ptr, bool spectate)) {
        csharp_bridge::on_race_start();
        RaceHandler::OnStart(this_ptr, spectate);
    }

    IL2CPP_INTERCEPT(, RaceHandler, void, OnFinished, (app::RaceHandler* this_ptr)) {
        csharp_bridge::on_race_end();
        RaceHandler::OnFinished(this_ptr);
    }
    
    //IL2CPP_INTERCEPT(, RaceHandler, void, OnRaceFailed, (app::RaceHandler* this_ptr)) {
    //    //csharp_bridge::on_race_end();
    //    RaceHandler::OnRaceFailed(this_ptr);
    //}
}
