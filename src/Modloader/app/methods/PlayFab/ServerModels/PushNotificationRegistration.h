#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PushNotificationRegistration.h>

namespace app::classes::PlayFab::ServerModels::PushNotificationRegistration {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PushNotificationRegistration* this_ptr)
}
