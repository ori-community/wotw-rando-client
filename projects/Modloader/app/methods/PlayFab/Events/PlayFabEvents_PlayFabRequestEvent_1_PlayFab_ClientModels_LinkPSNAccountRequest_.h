#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkPSNAccountRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkPSNAccountRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkPSNAccountRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkPSNAccountRequest_* this_ptr,
        app::LinkPSNAccountRequest* request
    )
}
