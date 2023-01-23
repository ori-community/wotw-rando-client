#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeleeWeapon_c.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::MeleeWeapon___c {
    IL2CPP_REGISTER_METHOD(0x009C7030, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MeleeWeapon_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__118_0, (app::MeleeWeapon_c * this_ptr, app::DamageResult _p0_))
    IL2CPP_REGISTER_METHODINFO(0x0470C1C0, MeleeWeapon_c___ctor_b__118_0__MethodInfo)
} // namespace app::classes::MeleeWeapon___c
