#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SnowBall {
    IL2CPP_REGISTER_METHOD(0x00EE2210, void, Awake, (app::SnowBall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE2370, void, OnCollisionStay, (app::SnowBall * this_ptr, app::Collision * other))
    IL2CPP_REGISTER_METHOD(0x00EE2730, void, OnCollisionEnter, (app::SnowBall * this_ptr, app::Collision * other))
    IL2CPP_REGISTER_METHOD(0x00EE29C0, void, ctor, (app::SnowBall * this_ptr))
}
