#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockDamageInterruption_c.h>
#include <Modloader/app/structs/DamageWeightMask__Enum.h>

namespace app::classes::Moon::Timeline::BlockDamageInterruption___c {
    IL2CPP_REGISTER_METHOD(0x010C8360, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BlockDamageInterruption_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__18_0, app::BlockDamageInterruption_c* this_ptr, app::DamageWeightMask__Enum _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__18_1, app::BlockDamageInterruption_c* this_ptr, app::DamageWeightMask__Enum _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__18_2, app::BlockDamageInterruption_c* this_ptr, app::DamageWeightMask__Enum _p0_)
} // namespace app::classes::Moon::Timeline::BlockDamageInterruption___c
