#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_UserInfoResponse_.h>
#include <Modloader/app/structs/UserInfoResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_UserInfoResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_UserInfoResponse_* this_ptr,
        app::UserInfoResponse* result
    )
}
