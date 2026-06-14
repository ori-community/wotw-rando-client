#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PushNotificationPackage.h>

namespace app::classes::PlayFab::ServerModels::PushNotificationPackage {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PushNotificationPackage* this_ptr)
}
