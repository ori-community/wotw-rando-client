#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FinalizeFileUploadsResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_FinalizeFileUploadsResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_FinalizeFileUploadsResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_FinalizeFileUploadsResponse_* this_ptr,
        app::FinalizeFileUploadsResponse* result
    )
}
