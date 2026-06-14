#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithOpenIdConnectRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithOpenIdConnectRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LoginWithOpenIdConnectRequest* this_ptr)
}
