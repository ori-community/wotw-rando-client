#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameServerRegionsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GameServerRegionsResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GameServerRegionsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GameServerRegionsResult_* this_ptr,
        app::GameServerRegionsResult* result
    )
}
