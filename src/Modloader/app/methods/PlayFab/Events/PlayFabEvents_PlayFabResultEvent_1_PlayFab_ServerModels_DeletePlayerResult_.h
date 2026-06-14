#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeletePlayerResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeletePlayerResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeletePlayerResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeletePlayerResult_* this_ptr,
        app::DeletePlayerResult* result
    )
}
