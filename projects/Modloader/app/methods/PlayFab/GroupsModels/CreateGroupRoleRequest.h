#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateGroupRoleRequest.h>

namespace app::classes::PlayFab::GroupsModels::CreateGroupRoleRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CreateGroupRoleRequest* this_ptr)
}
