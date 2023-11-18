#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_ * this_ptr, app::SetGameServerInstanceTagsResult* result))
}
