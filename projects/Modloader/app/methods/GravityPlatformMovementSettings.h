#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GravityPlatformMovementSettings.h>

namespace app::classes::GravityPlatformMovementSettings {
    IL2CPP_REGISTER_METHOD(0x00B605A0, void, CopyFrom, app::GravityPlatformMovementSettings* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01083260, void, ctor, app::GravityPlatformMovementSettings* this_ptr)
} // namespace app::classes::GravityPlatformMovementSettings
