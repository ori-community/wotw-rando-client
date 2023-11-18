#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::CreateGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateGroupRequest * this_ptr))
}
