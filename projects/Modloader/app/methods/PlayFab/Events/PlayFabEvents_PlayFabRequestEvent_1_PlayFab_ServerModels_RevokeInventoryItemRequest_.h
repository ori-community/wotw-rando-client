#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeInventoryItemRequest_.h>
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeInventoryItemRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeInventoryItemRequest_ * this_ptr, app::RevokeInventoryItemRequest* request))
}
