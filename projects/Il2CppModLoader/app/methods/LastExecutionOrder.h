#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LastExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x00F21DB0, void, Awake, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21E70, void, Start, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21F00, void, FixedUpdate, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LastExecutionOrder * this_ptr))
}
