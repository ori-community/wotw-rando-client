#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>

namespace app::classes::PlayFab::GroupsModels::AcceptGroupApplicationRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AcceptGroupApplicationRequest * this_ptr))
}
