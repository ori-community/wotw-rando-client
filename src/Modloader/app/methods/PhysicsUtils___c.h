#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsUtils_c.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::PhysicsUtils___c {
    IL2CPP_REGISTER_METHOD(0x011573A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PhysicsUtils_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011574E0, int32_t, __cctor_b__29_0, app::PhysicsUtils_c* this_ptr, app::RaycastHit a, app::RaycastHit b)
} // namespace app::classes::PhysicsUtils___c
