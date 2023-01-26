#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcceptGroupInvitationRequest.h>

namespace app::classes::PlayFab::GroupsModels::AcceptGroupInvitationRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AcceptGroupInvitationRequest * this_ptr))
}
