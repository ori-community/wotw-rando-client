#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CurrentGamesRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CurrentGamesRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CurrentGamesRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CurrentGamesRequest_* this_ptr,
        app::CurrentGamesRequest* request
    )
}
