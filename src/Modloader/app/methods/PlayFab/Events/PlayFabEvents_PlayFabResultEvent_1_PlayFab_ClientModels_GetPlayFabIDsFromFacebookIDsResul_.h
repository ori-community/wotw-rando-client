#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResul_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_* this_ptr,
        app::GetPlayFabIDsFromFacebookIDsResult* result
    )
}
