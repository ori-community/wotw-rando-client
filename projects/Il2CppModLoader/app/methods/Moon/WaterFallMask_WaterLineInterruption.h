#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::WaterFallMask_WaterLineInterruption {
    IL2CPP_REGISTER_METHOD(0x00F28500, void, ctor, (app::WaterFallMask_WaterLineInterruption * this_ptr, app::Vector2 start, app::Vector2 end))
    IL2CPP_REGISTER_METHOD(0x00F28550, app::Vector2, get_Start, (app::WaterFallMask_WaterLineInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F28570, app::Vector2, get_End, (app::WaterFallMask_WaterLineInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsActive, (app::WaterFallMask_WaterLineInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F28590, void, UpdateLine, (app::WaterFallMask_WaterLineInterruption * this_ptr, float delta_time, app::Vector2 gravity, bool start_point_locked, float max_height, float min_height))
    IL2CPP_REGISTER_METHOD(0x00F28950, void, Enable, (app::WaterFallMask_WaterLineInterruption * this_ptr, app::Vector2 point, float initial_velocity, float initial_separation))
    IL2CPP_REGISTER_METHOD(0x00F28AE0, void, Disable, (app::WaterFallMask_WaterLineInterruption * this_ptr))
} // namespace app::classes::Moon::WaterFallMask_WaterLineInterruption
