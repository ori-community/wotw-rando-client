#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddUsernamePasswordRequest_.h>
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddUsernamePasswordRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddUsernamePasswordRequest_ * this_ptr, app::AddUsernamePasswordRequest* request))
}
