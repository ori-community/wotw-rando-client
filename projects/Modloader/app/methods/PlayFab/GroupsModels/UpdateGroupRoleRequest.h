#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateGroupRoleRequest.h>

namespace app::classes::PlayFab::GroupsModels::UpdateGroupRoleRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateGroupRoleRequest* this_ptr)
}
