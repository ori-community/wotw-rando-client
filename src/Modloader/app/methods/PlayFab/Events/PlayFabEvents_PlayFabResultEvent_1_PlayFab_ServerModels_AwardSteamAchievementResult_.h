#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AwardSteamAchievementResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AwardSteamAchievementResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AwardSteamAchievementResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AwardSteamAchievementResult_* this_ptr,
        app::AwardSteamAchievementResult* result
    )
}
