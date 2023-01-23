#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Damage_c.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::Damage___c {
    IL2CPP_REGISTER_METHOD(0x00DC1B40, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Damage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__7_0, (app::Damage_c * this_ptr, app::DamageResult _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04772E40, Damage_c___ctor_b__7_0__MethodInfo)
} // namespace app::classes::Damage___c
