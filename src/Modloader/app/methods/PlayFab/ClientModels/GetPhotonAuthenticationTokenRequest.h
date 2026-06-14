#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPhotonAuthenticationTokenRequest* this_ptr)
}
