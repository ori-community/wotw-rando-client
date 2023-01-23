#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListGroupInvitationsResponse.h>

namespace app::classes::PlayFab::GroupsModels::ListGroupInvitationsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListGroupInvitationsResponse * this_ptr))
}
