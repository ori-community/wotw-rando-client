#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LiannaStickyTongue {
    IL2CPP_REGISTER_METHOD(0x0113F7E0, void, FixedUpdate, (app::LiannaStickyTongue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FA10, void, OnTriggerStay, (app::LiannaStickyTongue * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x00DA18C0, void, TargetEaten, (app::LiannaStickyTongue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD00, void, ctor, (app::LiannaStickyTongue * this_ptr))
}
