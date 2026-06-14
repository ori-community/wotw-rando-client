#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserInventoryResult.h>

namespace app::classes::PlayFab::ClientModels::GetUserInventoryResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetUserInventoryResult* this_ptr)
}
