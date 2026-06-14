#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateRemoteUserRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateRemoteUserRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateRemoteUserRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateRemoteUserRequest_* this_ptr,
        app::CreateRemoteUserRequest* request
    )
}
