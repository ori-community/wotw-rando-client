#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_.h>
#include <Modloader/app/structs/RemoveMatchmakingQueueResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_* this_ptr,
        app::RemoveMatchmakingQueueResult* result
    )
}
