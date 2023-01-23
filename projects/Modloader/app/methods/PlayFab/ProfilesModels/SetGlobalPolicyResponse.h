#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetGlobalPolicyResponse.h>

namespace app::classes::PlayFab::ProfilesModels::SetGlobalPolicyResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetGlobalPolicyResponse * this_ptr))
}
