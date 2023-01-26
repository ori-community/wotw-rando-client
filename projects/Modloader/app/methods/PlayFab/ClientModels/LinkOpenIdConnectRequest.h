#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkOpenIdConnectRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkOpenIdConnectRequest * this_ptr))
}
