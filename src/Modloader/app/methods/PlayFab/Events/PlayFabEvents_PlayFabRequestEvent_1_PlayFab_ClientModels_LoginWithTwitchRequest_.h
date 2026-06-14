#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithTwitchRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithTwitchRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithTwitchRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithTwitchRequest_* this_ptr,
        app::LoginWithTwitchRequest* request
    )
}
