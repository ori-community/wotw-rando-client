#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMembershipRequest.h>

namespace app::classes::PlayFab::GroupsModels::ListMembershipRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListMembershipRequest* this_ptr)
}
