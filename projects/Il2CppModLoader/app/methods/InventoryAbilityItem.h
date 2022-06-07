#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InventoryAbilityItem {
    IL2CPP_REGISTER_METHOD(0x0063EA70, bool, get_HasAbility, (app::InventoryAbilityItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063EB30, void, OnEnable, (app::InventoryAbilityItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryAbilityItem * this_ptr))
}
