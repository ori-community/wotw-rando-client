#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlockContainerItemResult_.h>
#include <Modloader/app/structs/UnlockContainerItemResult_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlockContainerItemResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlockContainerItemResult_* this_ptr,
        app::UnlockContainerItemResult_1* result
    )
}
