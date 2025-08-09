#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable_c_DisplayClass102_0.h>

namespace app::classes::MeleeComboMoveHammerChargeable___c__DisplayClass102_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01396A10,
        void,
        _TryToDealDamage_b__0,
        app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0* this_ptr,
        app::DamageResult tick_result
    )
} // namespace app::classes::MeleeComboMoveHammerChargeable___c__DisplayClass102_0
