#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::CollisionEventHandler {
    IL2CPP_REGISTER_METHOD(0x02557FE0, void, OnCollisionEnter, (app::CollisionEventHandler * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x02558080, void, OnCollisionStay, (app::CollisionEventHandler * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x02558120, void, OnCollisionExit, (app::CollisionEventHandler * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x025581C0, void, ctor, (app::CollisionEventHandler * this_ptr))
}
