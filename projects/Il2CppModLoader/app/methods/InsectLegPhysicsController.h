#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InsectLegPhysicsController {
    IL2CPP_REGISTER_METHOD(0x00629980, void, OnUpdatePhysics, (app::InsectLegPhysicsController * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x0062A1C0, void, ctor, (app::InsectLegPhysicsController * this_ptr))
}
