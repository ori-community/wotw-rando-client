#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEv_1_Play_MultiplayerMod_EnableMultiplayerServersForTitleRespo_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_* this_ptr,
        app::EnableMultiplayerServersForTitleResponse* result
    )
}
