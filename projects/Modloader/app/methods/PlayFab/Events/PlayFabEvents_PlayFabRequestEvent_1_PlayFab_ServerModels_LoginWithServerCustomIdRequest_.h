#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LoginWithServerCustomIdRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LoginWithServerCustomIdRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LoginWithServerCustomIdRequest_* this_ptr,
        app::LoginWithServerCustomIdRequest* request
    )
}
