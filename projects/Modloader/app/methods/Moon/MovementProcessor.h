#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::MovementProcessor {
    IL2CPP_REGISTER_METHOD(0x0111CA50, void, SetTargetLocalSpeed, (app::MovementProcessor * this_ptr, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x0111CA70, void, AddTargetLocalSpeed, (app::MovementProcessor * this_ptr, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, SetTargetLocalSpeedX, (app::MovementProcessor * this_ptr, float velocity_x))
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, SetTargetLocalSpeedY, (app::MovementProcessor * this_ptr, float velocity_y))
    IL2CPP_REGISTER_METHOD(0x00F28550, app::Vector2, get_TargetLocalSpeed, (app::MovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111CA50, void, set_TargetLocalSpeed, (app::MovementProcessor * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_AllowFreeRotation, (app::MovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_AllowFreeRotation, (app::MovementProcessor * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MovementProcessor * this_ptr))
} // namespace app::classes::Moon::MovementProcessor
