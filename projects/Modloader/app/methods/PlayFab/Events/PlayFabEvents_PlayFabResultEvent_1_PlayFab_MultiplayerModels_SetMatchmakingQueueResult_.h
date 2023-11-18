#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_.h>
#include <Modloader/app/structs/SetMatchmakingQueueResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_ * this_ptr, app::SetMatchmakingQueueResult* result))
}
