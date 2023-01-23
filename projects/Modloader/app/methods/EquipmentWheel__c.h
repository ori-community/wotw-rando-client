#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EquipmentWheel_c.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

namespace app::classes::EquipmentWheel___c {
    IL2CPP_REGISTER_METHOD(0x00981200, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EquipmentWheel_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__91_0, (app::EquipmentWheel_c * this_ptr, app::AbilityType__Enum _p0_, app::AbilityType__Enum _p1_))
    IL2CPP_REGISTER_METHODINFO(0x0470A950, EquipmentWheel_c___ctor_b__91_0__MethodInfo)
} // namespace app::classes::EquipmentWheel___c
