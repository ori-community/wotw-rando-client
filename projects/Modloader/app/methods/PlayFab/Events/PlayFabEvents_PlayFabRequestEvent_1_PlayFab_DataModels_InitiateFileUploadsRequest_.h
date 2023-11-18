#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_InitiateFileUploadsRequest_.h>
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_InitiateFileUploadsRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_InitiateFileUploadsRequest_ * this_ptr, app::InitiateFileUploadsRequest* request))
}
