#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSplashInfo.h>
#include <Modloader/app/structs/UberWaterSplash.h>

namespace app::classes::UberWaterSplash {
    IL2CPP_REGISTER_METHOD(0x012A9DB0, void, OnSplash, app::UberWaterSplash* this_ptr, app::SeinSplashInfo splash)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::UberWaterSplash* this_ptr)
} // namespace app::classes::UberWaterSplash
