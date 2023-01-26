#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InviteToGroupResponse.h>

namespace app::classes::PlayFab::GroupsModels::InviteToGroupResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InviteToGroupResponse * this_ptr))
}
