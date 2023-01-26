#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InviteToGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::InviteToGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InviteToGroupRequest * this_ptr))
}
