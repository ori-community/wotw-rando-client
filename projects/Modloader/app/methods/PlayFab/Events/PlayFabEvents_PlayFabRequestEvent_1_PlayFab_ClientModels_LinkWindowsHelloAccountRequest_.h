#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkWindowsHelloAccountRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkWindowsHelloAccountRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkWindowsHelloAccountRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkWindowsHelloAccountRequest_* this_ptr,
        app::LinkWindowsHelloAccountRequest* request
    )
}
