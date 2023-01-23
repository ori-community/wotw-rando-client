#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vitals_c.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::Moon::Vitals___c {
    IL2CPP_REGISTER_METHOD(0x01198620, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Vitals_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__101_0, (app::Vitals_c * this_ptr, app::DamageResult _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04704A48, Vitals_c___ctor_b__101_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__101_1, (app::Vitals_c * this_ptr, app::DamageResult _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04744E60, Vitals_c___ctor_b__101_1__MethodInfo)
} // namespace app::classes::Moon::Vitals___c
