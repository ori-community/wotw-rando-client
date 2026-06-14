#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_SetObjectsRequest_.h>
#include <Modloader/app/structs/SetObjectsRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_SetObjectsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_SetObjectsRequest_* this_ptr,
        app::SetObjectsRequest* request
    )
}
