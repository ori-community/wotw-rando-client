#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantItemsToUserResult.h>

namespace app::classes::PlayFab::ServerModels::GrantItemsToUserResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantItemsToUserResult* this_ptr)
}
