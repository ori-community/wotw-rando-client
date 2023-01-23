#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoveGroupInvitationRequest.h>

namespace app::classes::PlayFab::GroupsModels::RemoveGroupInvitationRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveGroupInvitationRequest * this_ptr))
}
