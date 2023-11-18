#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithCustomIDRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithCustomIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithCustomIDRequest * this_ptr))
}
