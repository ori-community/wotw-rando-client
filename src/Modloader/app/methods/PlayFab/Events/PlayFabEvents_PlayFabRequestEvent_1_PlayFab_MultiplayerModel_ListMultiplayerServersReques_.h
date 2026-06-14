#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMultiplayerServersRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModel_ListMultiplayerServersReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersRequest_* this_ptr,
        app::ListMultiplayerServersRequest* request
    )
}
