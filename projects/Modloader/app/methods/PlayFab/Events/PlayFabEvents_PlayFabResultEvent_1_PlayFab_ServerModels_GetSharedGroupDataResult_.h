#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetSharedGroupDataResult_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetSharedGroupDataResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetSharedGroupDataResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetSharedGroupDataResult_* this_ptr,
        app::GetSharedGroupDataResult_1* result
    )
}
