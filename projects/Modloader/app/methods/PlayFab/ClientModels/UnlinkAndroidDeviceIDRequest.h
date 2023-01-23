#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkAndroidDeviceIDRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkAndroidDeviceIDRequest * this_ptr))
}
