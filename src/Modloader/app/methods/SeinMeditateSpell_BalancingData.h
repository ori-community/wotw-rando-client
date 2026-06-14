#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMeditateSpell_BalancingData.h>

namespace app::classes::SeinMeditateSpell_BalancingData {
    IL2CPP_REGISTER_METHOD(0x008A6C30, bool, get_Upgraded, app::SeinMeditateSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6D10, float, get_HealthPercentagePerHeal, app::SeinMeditateSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6D40, float, get_HealthPerHeal, app::SeinMeditateSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6D70, float, get_EnergyPerHeal, app::SeinMeditateSpell_BalancingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6DA0, void, ctor, app::SeinMeditateSpell_BalancingData* this_ptr)
} // namespace app::classes::SeinMeditateSpell_BalancingData
