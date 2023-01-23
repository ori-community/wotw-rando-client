#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GrantItemsToUsersResult.h>

namespace app::classes::PlayFab::ServerModels::GrantItemsToUsersResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GrantItemsToUsersResult * this_ptr))
}
