#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramDamageSettings.h>

namespace app::classes::SeinChakramSpell_BalancingData_ChakramDamageSettings {
    IL2CPP_REGISTER_METHOD(
        0x00A3F4E0,
        void,
        ctor,
        app::SeinChakramSpell_BalancingData_ChakramDamageSettings* this_ptr,
        float damage,
        app::DamageWeight__Enum damage_weight
    )
}
