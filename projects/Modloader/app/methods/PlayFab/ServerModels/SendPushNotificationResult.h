#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SendPushNotificationResult.h>

namespace app::classes::PlayFab::ServerModels::SendPushNotificationResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendPushNotificationResult * this_ptr))
}
