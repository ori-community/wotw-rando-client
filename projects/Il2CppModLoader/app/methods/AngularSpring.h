#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AngularSpring {
    IL2CPP_REGISTER_METHOD(0x004FA050, void, Awake, (app::AngularSpring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA200, void, OnDestroy, (app::AngularSpring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA2A0, void, FixedUpdate, (app::AngularSpring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::AngularSpring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::AngularSpring * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::SuspendableMask__Enum, get_Mask, (app::AngularSpring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA580, void, set_Mask, (app::AngularSpring * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x004FA630, void, ctor, (app::AngularSpring * this_ptr))
}
