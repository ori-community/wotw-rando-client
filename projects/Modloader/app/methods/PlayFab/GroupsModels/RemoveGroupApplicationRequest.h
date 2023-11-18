#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveGroupApplicationRequest.h>

namespace app::classes::PlayFab::GroupsModels::RemoveGroupApplicationRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveGroupApplicationRequest * this_ptr))
}
