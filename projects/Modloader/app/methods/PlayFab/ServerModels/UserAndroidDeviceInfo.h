#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserAndroidDeviceInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserAndroidDeviceInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserAndroidDeviceInfo_1 * this_ptr))
}
