#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AwardSteamAchievementRequest_.h>
#include <Modloader/app/structs/AwardSteamAchievementRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AwardSteamAchievementRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AwardSteamAchievementRequest_ * this_ptr, app::AwardSteamAchievementRequest* request))
}
