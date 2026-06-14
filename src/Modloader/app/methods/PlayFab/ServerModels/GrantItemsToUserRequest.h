#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantItemsToUserRequest.h>

namespace app::classes::PlayFab::ServerModels::GrantItemsToUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantItemsToUserRequest* this_ptr)
}
