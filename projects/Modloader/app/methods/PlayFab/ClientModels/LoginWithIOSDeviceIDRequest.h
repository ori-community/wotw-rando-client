#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithIOSDeviceIDRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithIOSDeviceIDRequest * this_ptr))
}
