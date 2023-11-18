#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RollingMovement_c.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RollingMovement___c {
    IL2CPP_REGISTER_METHOD(0x01366AC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RollingMovement_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_0, (app::RollingMovement_c * this_ptr, app::Vector3 _p0_, float _p1_, app::Collider* _p2_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_1, (app::RollingMovement_c * this_ptr, app::Vector3 _p0_, float _p1_, app::Collider* _p2_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_2, (app::RollingMovement_c * this_ptr, app::Vector3 _p0_, float _p1_, app::Collider* _p2_))
} // namespace app::classes::RollingMovement___c
