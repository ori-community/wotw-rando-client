#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMultiplayerServersResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModel_ListMultiplayerServersRespons_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* this_ptr,
        app::ListMultiplayerServersResponse* result
    )
}
