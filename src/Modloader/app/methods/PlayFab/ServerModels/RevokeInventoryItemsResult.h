#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeInventoryItemsResult.h>

namespace app::classes::PlayFab::ServerModels::RevokeInventoryItemsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RevokeInventoryItemsResult* this_ptr)
}
