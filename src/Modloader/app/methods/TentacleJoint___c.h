#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/TentacleJoint_c.h>

namespace app::classes::TentacleJoint___c {
    IL2CPP_REGISTER_METHOD(0x010CE100, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TentacleJoint_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__6_0, app::TentacleJoint_c* this_ptr, app::Damage* _p0_, int32_t _p1_)
} // namespace app::classes::TentacleJoint___c
