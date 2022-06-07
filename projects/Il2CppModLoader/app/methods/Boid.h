#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Boid {
    IL2CPP_REGISTER_METHOD(0x00D34C70, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00D34D50, float, get_MaxSpeed, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34D70, float, get_MaxAcceleration, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34D90, void, OnEnable, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34E50, void, OnDisable, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34F10, void, Awake, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34FA0, void, Start, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D350D0, app::Vector2, SeekPosition, (app::Boid * this_ptr, app::Vector2 target))
    IL2CPP_REGISTER_METHOD(0x00D351F0, app::Vector2, SeekSpeed, (app::Boid * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHOD(0x00D35310, void, Update, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D354A0, void, FixedUpdate, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Boid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D364F0, void, cctor, ())
}
