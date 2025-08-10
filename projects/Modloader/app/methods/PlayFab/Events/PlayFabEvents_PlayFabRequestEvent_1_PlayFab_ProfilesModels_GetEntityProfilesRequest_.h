#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetEntityProfilesRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetEntityProfilesRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetEntityProfilesRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetEntityProfilesRequest_* this_ptr,
        app::GetEntityProfilesRequest* request
    )
}
