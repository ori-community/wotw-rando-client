#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddMembersRequest.h>

namespace app::classes::PlayFab::GroupsModels::AddMembersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddMembersRequest * this_ptr))
}
