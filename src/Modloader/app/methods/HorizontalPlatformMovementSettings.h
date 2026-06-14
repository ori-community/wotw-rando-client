#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>

namespace app::classes::HorizontalPlatformMovementSettings {
    IL2CPP_REGISTER_METHOD(0x00B602E0, void, CopyFrom, app::HorizontalPlatformMovementSettings* this_ptr, app::HorizontalPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00B60370, void, ctor, app::HorizontalPlatformMovementSettings* this_ptr)
} // namespace app::classes::HorizontalPlatformMovementSettings
