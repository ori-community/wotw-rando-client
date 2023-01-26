#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantItemsToUsersRequest.h>

namespace app::classes::PlayFab::ServerModels::GrantItemsToUsersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GrantItemsToUsersRequest * this_ptr))
}
