#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEven_1_PlayFa_ClientModel_GetFriendLeaderboardAroundPlayerResu_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_* this_ptr,
        app::GetFriendLeaderboardAroundPlayerResult* result
    )
}
