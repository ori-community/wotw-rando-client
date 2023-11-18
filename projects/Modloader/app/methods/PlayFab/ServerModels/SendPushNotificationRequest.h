#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SendPushNotificationRequest.h>

namespace app::classes::PlayFab::ServerModels::SendPushNotificationRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendPushNotificationRequest * this_ptr))
}
