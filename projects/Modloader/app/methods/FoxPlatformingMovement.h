#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FoxPlatformingMovement.h>

namespace app::classes::FoxPlatformingMovement {
    IL2CPP_REGISTER_METHOD(0x01633B20, void, ApplyKickback, (app::FoxPlatformingMovement * this_ptr, float kickback_multiplier))
    IL2CPP_REGISTER_METHOD(0x01633B60, bool, OnUpdate, (app::FoxPlatformingMovement * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01633D60, void, ctor, (app::FoxPlatformingMovement * this_ptr))
} // namespace app::classes::FoxPlatformingMovement
