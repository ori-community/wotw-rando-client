#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrightnessProvider.h>

namespace app::classes::BrightnessProvider {
    IL2CPP_REGISTER_METHOD(0x00D510D0, float, GetFloatValue, (app::BrightnessProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BrightnessProvider * this_ptr))
} // namespace app::classes::BrightnessProvider
