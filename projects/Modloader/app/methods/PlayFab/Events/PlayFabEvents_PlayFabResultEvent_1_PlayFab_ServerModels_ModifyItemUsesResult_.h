#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifyItemUsesResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyItemUsesResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyItemUsesResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyItemUsesResult_* this_ptr,
        app::ModifyItemUsesResult* result
    )
}
