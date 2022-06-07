#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SplineAgent {
    IL2CPP_REGISTER_METHOD(0x009A21F0, void, Awake, (app::SplineAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A2220, void, FixedUpdate, (app::SplineAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A2590, void, ctor, (app::SplineAgent * this_ptr))
}
