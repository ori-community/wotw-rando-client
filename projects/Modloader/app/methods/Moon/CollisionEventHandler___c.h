#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionEventHandler_c.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::Moon::CollisionEventHandler___c {
    IL2CPP_REGISTER_METHOD(0x02558630, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CollisionEventHandler_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__6_0, (app::CollisionEventHandler_c * this_ptr, app::Collision* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__6_1, (app::CollisionEventHandler_c * this_ptr, app::Collision* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__6_2, (app::CollisionEventHandler_c * this_ptr, app::Collision* _p0_))
} // namespace app::classes::Moon::CollisionEventHandler___c
