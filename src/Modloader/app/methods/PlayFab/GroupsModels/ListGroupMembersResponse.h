#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListGroupMembersResponse.h>

namespace app::classes::PlayFab::GroupsModels::ListGroupMembersResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListGroupMembersResponse* this_ptr)
}
