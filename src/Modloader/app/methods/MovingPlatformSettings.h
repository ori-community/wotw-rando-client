#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovingPlatformSettings.h>

namespace app::classes::MovingPlatformSettings {
    IL2CPP_REGISTER_METHOD(0x008704D0, void, ctor, app::MovingPlatformSettings* this_ptr)
}
