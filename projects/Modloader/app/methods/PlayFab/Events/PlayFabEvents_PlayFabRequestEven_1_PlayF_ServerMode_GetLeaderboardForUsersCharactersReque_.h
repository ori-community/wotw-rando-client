#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayF_ServerMode_GetLeaderboardForUsersCharactersReque_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersRequest_* this_ptr,
        app::GetLeaderboardForUsersCharactersRequest_1* request
    )
}
