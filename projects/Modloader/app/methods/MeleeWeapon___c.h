#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MeleeWeapon_c.h>

namespace app::classes::MeleeWeapon___c {
    IL2CPP_REGISTER_METHOD(0x009C7030, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MeleeWeapon_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__118_0, app::MeleeWeapon_c* this_ptr, app::DamageResult _p0_)
} // namespace app::classes::MeleeWeapon___c
