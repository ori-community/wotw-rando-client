#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/TentacleHead_c.h>

namespace app::classes::TentacleHead___c {
    IL2CPP_REGISTER_METHOD(0x00D00760, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TentacleHead_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__4_0, app::TentacleHead_c* this_ptr, app::Collider* _p0_)
} // namespace app::classes::TentacleHead___c
