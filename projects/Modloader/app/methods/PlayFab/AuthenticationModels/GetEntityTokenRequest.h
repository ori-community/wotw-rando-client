#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetEntityTokenRequest.h>

namespace app::classes::PlayFab::AuthenticationModels::GetEntityTokenRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetEntityTokenRequest * this_ptr))
}
