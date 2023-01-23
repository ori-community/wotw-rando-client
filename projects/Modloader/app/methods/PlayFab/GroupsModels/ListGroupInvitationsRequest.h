#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListGroupInvitationsRequest.h>

namespace app::classes::PlayFab::GroupsModels::ListGroupInvitationsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListGroupInvitationsRequest * this_ptr))
}
