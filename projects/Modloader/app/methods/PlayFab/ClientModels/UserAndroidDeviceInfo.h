#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserAndroidDeviceInfo.h>

namespace app::classes::PlayFab::ClientModels::UserAndroidDeviceInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserAndroidDeviceInfo * this_ptr))
}
