#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameReques_.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_* this_ptr,
        app::UpdateUserTitleDisplayNameRequest* request
    )
}
