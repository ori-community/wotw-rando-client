#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeInventoryResult.h>

namespace app::classes::PlayFab::ServerModels::RevokeInventoryResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RevokeInventoryResult* this_ptr)
}
