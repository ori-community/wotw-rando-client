#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserIosDeviceInfo.h>

namespace app::classes::PlayFab::ClientModels::UserIosDeviceInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserIosDeviceInfo* this_ptr)
}
