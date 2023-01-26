#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VibrationStrengthProvider.h>

namespace app::classes::VibrationStrengthProvider {
    IL2CPP_REGISTER_METHOD(0x008BB780, float, GetFloatValue, (app::VibrationStrengthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VibrationStrengthProvider * this_ptr))
} // namespace app::classes::VibrationStrengthProvider
