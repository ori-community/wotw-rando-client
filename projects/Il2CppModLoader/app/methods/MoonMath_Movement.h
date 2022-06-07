#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonMath_Movement {
    IL2CPP_REGISTER_METHOD(0x02576C20, float, AccelerateSpeed, (float speed, float acceleration, float max_speed, bool left))
    IL2CPP_REGISTER_METHOD(0x02576DD0, float, DecelerateSpeed, (float speed, float deceleration))
    IL2CPP_REGISTER_METHOD(0x02576F60, float, ApplyGravity, (float speed, float gravity, float max_speed))
    IL2CPP_REGISTER_METHOD(0x02577080, float, SpeedFromAngular, (float r, float angular_speed))
}
