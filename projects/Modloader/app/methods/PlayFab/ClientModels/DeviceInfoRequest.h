#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeviceInfoRequest.h>

namespace app::classes::PlayFab::ClientModels::DeviceInfoRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeviceInfoRequest * this_ptr))
}
