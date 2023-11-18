#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::UpdateGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateGroupRequest * this_ptr))
}
