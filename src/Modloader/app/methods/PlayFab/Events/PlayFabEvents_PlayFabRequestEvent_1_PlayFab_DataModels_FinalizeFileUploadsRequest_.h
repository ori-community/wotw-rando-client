#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_FinalizeFileUploadsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_FinalizeFileUploadsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_FinalizeFileUploadsRequest_* this_ptr,
        app::FinalizeFileUploadsRequest* request
    )
}
