#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbortFileUploadsResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_AbortFileUploadsResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_AbortFileUploadsResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_AbortFileUploadsResponse_* this_ptr,
        app::AbortFileUploadsResponse* result
    )
}
