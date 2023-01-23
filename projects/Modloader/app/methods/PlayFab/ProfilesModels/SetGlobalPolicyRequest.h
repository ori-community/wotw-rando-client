#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>

namespace app::classes::PlayFab::ProfilesModels::SetGlobalPolicyRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetGlobalPolicyRequest * this_ptr))
}
