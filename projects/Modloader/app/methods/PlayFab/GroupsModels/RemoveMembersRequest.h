#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveMembersRequest.h>

namespace app::classes::PlayFab::GroupsModels::RemoveMembersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveMembersRequest * this_ptr))
}
