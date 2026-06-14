#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingQueuesResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_* this_ptr,
        app::ListMatchmakingQueuesResult* result
    )
}
