#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerProfileResult_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerProfileResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerProfileResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerProfileResult_* this_ptr,
        app::GetPlayerProfileResult_1* result
    )
}
