#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerRegisteredPushNotificationsEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerRegisteredPushNotificationsEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerRegisteredPushNotificationsEventData * this_ptr))
}
