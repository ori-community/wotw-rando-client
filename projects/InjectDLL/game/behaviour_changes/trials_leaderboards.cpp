#include <Il2CppModLoader/interception_macros.h>

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
}
