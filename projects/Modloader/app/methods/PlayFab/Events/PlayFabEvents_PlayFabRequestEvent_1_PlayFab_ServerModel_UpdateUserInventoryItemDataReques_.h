#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModel_UpdateUserInventoryItemDataReques_.h>
#include <Modloader/app/structs/UpdateUserInventoryItemDataRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserInventoryItemDataRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserInventoryItemDataRequest_* this_ptr,
        app::UpdateUserInventoryItemDataRequest* request
    )
}
