#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_c.h>

namespace app::classes::Moon::Vitals_DamageProcessHelper___c {
    IL2CPP_REGISTER_METHOD(0x01199A20, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Vitals_DamageProcessHelper_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01199B60,
        int32_t,
        __ctor_b__10_0,
        app::Vitals_DamageProcessHelper_c* this_ptr,
        app::Vitals_DamageProcessHelper_SortedDamageEntry a,
        app::Vitals_DamageProcessHelper_SortedDamageEntry b
    )
} // namespace app::classes::Moon::Vitals_DamageProcessHelper___c
