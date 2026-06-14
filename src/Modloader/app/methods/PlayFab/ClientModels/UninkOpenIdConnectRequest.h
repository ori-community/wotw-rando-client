#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UninkOpenIdConnectRequest.h>

namespace app::classes::PlayFab::ClientModels::UninkOpenIdConnectRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UninkOpenIdConnectRequest* this_ptr)
}
