#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShellShatterEffect.h>

namespace app::classes::ShellShatterEffect {
    IL2CPP_REGISTER_METHOD(0x005B2370, void, OnEnable, (app::ShellShatterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B2390, void, Explode, (app::ShellShatterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B2A90, void, FixedUpdate, (app::ShellShatterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B2D20, void, UpdateVelocity, (app::ShellShatterEffect * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x005B31D0, void, OnDissolveEnd, (app::ShellShatterEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B32F0, void, ctor, (app::ShellShatterEffect * this_ptr))
} // namespace app::classes::ShellShatterEffect
