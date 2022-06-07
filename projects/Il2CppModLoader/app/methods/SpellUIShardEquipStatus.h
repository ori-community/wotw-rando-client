#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpellUIShardEquipStatus {
    IL2CPP_REGISTER_METHOD(0x0094F5D0, void, Awake, (app::SpellUIShardEquipStatus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094F5E0, void, SetEquipment, (app::SpellUIShardEquipStatus * this_ptr, app::EquipmentType__Enum type))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpellUIShardEquipStatus * this_ptr))
}
