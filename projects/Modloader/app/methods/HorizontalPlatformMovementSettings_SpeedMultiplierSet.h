#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>

namespace app::classes::HorizontalPlatformMovementSettings_SpeedMultiplierSet {
    IL2CPP_REGISTER_METHOD(0x00B605A0, void, CopyFrom, (app::HorizontalPlatformMovementSettings_SpeedMultiplierSet * this_ptr, app::HorizontalPlatformMovementSettings_SpeedMultiplierSet* multiplier_set))
    IL2CPP_REGISTER_METHOD(0x00B605D0, void, ctor, (app::HorizontalPlatformMovementSettings_SpeedMultiplierSet * this_ptr))
} // namespace app::classes::HorizontalPlatformMovementSettings_SpeedMultiplierSet
