#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerSegmentsResult_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerSegmentsResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerSegmentsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerSegmentsResult_* this_ptr,
        app::GetPlayerSegmentsResult_1* result
    )
}
