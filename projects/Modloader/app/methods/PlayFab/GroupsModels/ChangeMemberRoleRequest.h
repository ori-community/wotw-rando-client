#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>

namespace app::classes::PlayFab::GroupsModels::ChangeMemberRoleRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ChangeMemberRoleRequest * this_ptr))
}
