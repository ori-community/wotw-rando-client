#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RevokeInventoryItemsRequest.h>

namespace app::classes::PlayFab::ServerModels::RevokeInventoryItemsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RevokeInventoryItemsRequest * this_ptr))
}
