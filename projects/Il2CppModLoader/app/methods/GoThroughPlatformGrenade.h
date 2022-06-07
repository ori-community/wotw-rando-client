#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GoThroughPlatformGrenade {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::GoThroughPlatformGrenade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::GoThroughPlatformGrenade * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007FC170, bool, get_IsFalling, (app::GoThroughPlatformGrenade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC1F0, void, OnEnable, (app::GoThroughPlatformGrenade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC220, void, SetFallingState, (app::GoThroughPlatformGrenade * this_ptr, bool is_falling))
    IL2CPP_REGISTER_METHOD(0x007FC2E0, void, FixedUpdate, (app::GoThroughPlatformGrenade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::GoThroughPlatformGrenade * this_ptr))
}
