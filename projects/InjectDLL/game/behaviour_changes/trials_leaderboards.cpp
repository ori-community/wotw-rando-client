#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Moon/Race/LeaderBoardService.h>
#include <Il2CppModLoader/app/methods/Moon/Race/Networking/WebService.h>

namespace {
    IL2CPP_INTERCEPT(Moon::Race::LeaderBoardService, void, UploadReplay_1, (
            app::LeaderBoardService * this_ptr,
            app::String * race_id,
            float duration,
            app::String * replay_data,
            app::ITrialData * trial_data)) {
        // NOOP
    }

    IL2CPP_INTERCEPT(Moon::Race::LeaderBoardService, bool, UploadReplay_2, (
            app::LeaderBoardService * this_ptr,
            app::String * race_id,
            float duration,
            app::String * replay_data,
            app::ReplayValidatorData * data)) {
        return false; // NOOP
    }

    IL2CPP_INTERCEPT(Moon::Race::Networking::WebService, void, UploadData, (
            app::String * site_id,
            app::ReplayData* data)) {
        // NOOP
    }
} // namespace
