#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ApplyToGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::ApplyToGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ApplyToGroupRequest * this_ptr))
}
