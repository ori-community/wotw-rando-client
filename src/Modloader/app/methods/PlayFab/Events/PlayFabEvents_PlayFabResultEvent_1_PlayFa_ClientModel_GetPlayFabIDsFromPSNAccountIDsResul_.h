#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFa_ClientModel_GetPlayFabIDsFromPSNAccountIDsResul_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_* this_ptr,
        app::GetPlayFabIDsFromPSNAccountIDsResult* result
    )
}
