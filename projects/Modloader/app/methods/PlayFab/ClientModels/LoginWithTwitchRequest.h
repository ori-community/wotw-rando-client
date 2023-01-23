#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoginWithTwitchRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithTwitchRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithTwitchRequest * this_ptr))
}
