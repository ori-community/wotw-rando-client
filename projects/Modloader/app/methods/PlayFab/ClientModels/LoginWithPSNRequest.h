#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoginWithPSNRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithPSNRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithPSNRequest * this_ptr))
}
