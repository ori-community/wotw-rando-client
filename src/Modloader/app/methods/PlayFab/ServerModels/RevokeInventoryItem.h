#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeInventoryItem.h>

namespace app::classes::PlayFab::ServerModels::RevokeInventoryItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RevokeInventoryItem* this_ptr)
}
