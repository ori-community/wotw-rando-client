#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterSplashEffect.h>

namespace app::classes::WaterSplashEffect {
    IL2CPP_REGISTER_METHOD(0x008E2260, void, ctor, app::WaterSplashEffect* this_ptr)
}
