#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequest_1_Pl_Multiplayer_GetTitleEnabledForMultiplayerServersStatusR_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusRequest_* this_ptr,
        app::GetTitleEnabledForMultiplayerServersStatusRequest* request
    )
}
