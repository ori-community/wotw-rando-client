#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::SeinDamageOwner {
    IL2CPP_REGISTER_METHOD(0x00ECB7C0, void, HandleDamageBoostShard, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECB900, void, HandleCombatLuckShard, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECBB10, void, HandleSpiritPowerShard, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECBD10, void, HandleIceShard, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECC150, void, HandleLastResortShard, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECC420, void, HandleHardMode, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECC550, void, ProcessDamage, (app::SeinDamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00ECC9C0, float, GetUpgradeBonus, (app::SeinDamageOwner * this_ptr, float original_base_damage))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinDamageOwner * this_ptr))
}
