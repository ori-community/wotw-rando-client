#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetPlayerSecretRequest_.h>
#include <Modloader/app/structs/SetPlayerSecretRequest_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetPlayerSecretRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetPlayerSecretRequest_* this_ptr,
        app::SetPlayerSecretRequest_1* request
    )
}
