#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithXboxRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithXboxRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithXboxRequest * this_ptr))
}
