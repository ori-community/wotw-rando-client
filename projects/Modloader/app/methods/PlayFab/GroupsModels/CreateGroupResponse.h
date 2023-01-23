#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CreateGroupResponse.h>

namespace app::classes::PlayFab::GroupsModels::CreateGroupResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateGroupResponse * this_ptr))
}
