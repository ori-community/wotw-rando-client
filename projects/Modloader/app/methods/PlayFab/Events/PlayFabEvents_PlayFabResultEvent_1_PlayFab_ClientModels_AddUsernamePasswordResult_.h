#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddUsernamePasswordResult_.h>
#include <Modloader/app/structs/AddUsernamePasswordResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddUsernamePasswordResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddUsernamePasswordResult_ * this_ptr, app::AddUsernamePasswordResult* result))
}
