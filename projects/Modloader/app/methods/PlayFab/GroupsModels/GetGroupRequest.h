#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::GetGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetGroupRequest * this_ptr))
}
