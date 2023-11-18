#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumpShotShield_c.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::JumpShotShield___c {
    IL2CPP_REGISTER_METHOD(0x00E50D30, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JumpShotShield_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__4_0, (app::JumpShotShield_c * this_ptr, app::Collider* _p0_))
} // namespace app::classes::JumpShotShield___c
