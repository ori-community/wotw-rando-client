#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_AbortFileUploadsRequest_.h>
#include <Modloader/app/structs/AbortFileUploadsRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_AbortFileUploadsRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_AbortFileUploadsRequest_ * this_ptr, app::AbortFileUploadsRequest* request))
}
