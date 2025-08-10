#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResult_1_Pl_Multiplayer_GetTitleEnabledForMultiplayerServersStatusRe_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_* this_ptr,
        app::GetTitleEnabledForMultiplayerServersStatusResponse* result
    )
}
