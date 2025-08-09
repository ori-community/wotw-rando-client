#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTagsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerTagsResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerTagsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerTagsResult_* this_ptr,
        app::GetPlayerTagsResult* result
    )
}
