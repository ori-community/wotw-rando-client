#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackableSwitch_c.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::AttackableSwitch___c {
    IL2CPP_REGISTER_METHOD(0x00855BD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttackableSwitch_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__106_0, (app::AttackableSwitch_c * this_ptr, app::Damage* _p0_))
} // namespace app::classes::AttackableSwitch___c
