#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsMemberRequest.h>

namespace app::classes::PlayFab::GroupsModels::IsMemberRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IsMemberRequest * this_ptr))
}
