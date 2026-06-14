#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEven_1_PlayFa_ServerModel_GetLeaderboardForUsersCharactersResu_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_* this_ptr,
        app::GetLeaderboardForUsersCharactersResult_1* result
    )
}
