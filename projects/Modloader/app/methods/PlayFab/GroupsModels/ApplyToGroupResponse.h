#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ApplyToGroupResponse.h>

namespace app::classes::PlayFab::GroupsModels::ApplyToGroupResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ApplyToGroupResponse * this_ptr))
}
