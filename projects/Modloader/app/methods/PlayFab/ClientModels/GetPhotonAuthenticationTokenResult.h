#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPhotonAuthenticationTokenResult.h>

namespace app::classes::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPhotonAuthenticationTokenResult * this_ptr))
}
