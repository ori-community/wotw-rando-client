#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinChakramSpell_BalancingData.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramDamageSettings.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramSettings.h>

namespace app::classes::SeinChakramSpell_BalancingData {
    IL2CPP_REGISTER_METHOD(
        0x00A3F1B0,
        app::SeinChakramSpell_BalancingData_ChakramSettings*,
        GetCurrentChakramSettings,
        app::SeinChakramSpell_BalancingData* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00A3F2C0, bool, get_CanSpin, app::SeinChakramSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F2E0, float, get_EnergyCost, app::SeinChakramSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A3F300,
        app::SeinChakramSpell_BalancingData_ChakramDamageSettings*,
        GetDamage,
        app::SeinChakramSpell_BalancingData* this_ptr,
        int32_t hit_number
    )
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::SeinChakramSpell_BalancingData* this_ptr)
} // namespace app::classes::SeinChakramSpell_BalancingData
