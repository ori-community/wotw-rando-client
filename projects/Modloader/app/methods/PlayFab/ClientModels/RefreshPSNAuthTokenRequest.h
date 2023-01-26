#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RefreshPSNAuthTokenRequest.h>

namespace app::classes::PlayFab::ClientModels::RefreshPSNAuthTokenRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RefreshPSNAuthTokenRequest * this_ptr))
}
