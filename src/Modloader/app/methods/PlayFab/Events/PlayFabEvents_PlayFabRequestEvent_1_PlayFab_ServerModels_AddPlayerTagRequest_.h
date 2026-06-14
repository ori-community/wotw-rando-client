#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddPlayerTagRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddPlayerTagRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddPlayerTagRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddPlayerTagRequest_* this_ptr,
        app::AddPlayerTagRequest* request
    )
}
