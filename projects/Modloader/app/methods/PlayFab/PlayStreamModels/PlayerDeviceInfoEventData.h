#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerDeviceInfoEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerDeviceInfoEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerDeviceInfoEventData* this_ptr)
}
