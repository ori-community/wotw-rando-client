#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteRoleRequest.h>

namespace app::classes::PlayFab::GroupsModels::DeleteRoleRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteRoleRequest * this_ptr))
}
