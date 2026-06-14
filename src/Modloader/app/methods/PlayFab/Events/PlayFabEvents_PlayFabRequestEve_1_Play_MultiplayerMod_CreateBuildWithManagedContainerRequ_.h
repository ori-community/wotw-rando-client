#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEve_1_Play_MultiplayerMod_CreateBuildWithManagedContainerRequ_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerRequest_* this_ptr,
        app::CreateBuildWithManagedContainerRequest* request
    )
}
