#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeleteGroupRequest.h>

namespace app::classes::PlayFab::GroupsModels::DeleteGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteGroupRequest * this_ptr))
}
