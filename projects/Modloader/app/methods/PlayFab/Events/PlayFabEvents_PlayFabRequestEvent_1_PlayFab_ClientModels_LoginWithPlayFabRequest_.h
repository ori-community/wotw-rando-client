#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithPlayFabRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithPlayFabRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithPlayFabRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithPlayFabRequest_* this_ptr,
        app::LoginWithPlayFabRequest* request
    )
}
