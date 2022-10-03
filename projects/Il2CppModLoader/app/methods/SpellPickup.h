#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpellPickup {
    IL2CPP_REGISTER_METHOD(0x00943310, void, Awake, (app::SpellPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00943320, void, Initialize, (app::SpellPickup * this_ptr, app::EquipmentType__Enum equipment, app::SpellInventory_Binding__Enum binding))
    IL2CPP_REGISTER_METHOD(0x00943660, void, OnCollect, (app::SpellPickup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789EF0, SpellPickup_OnCollect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009437D0, void, ctor, (app::SpellPickup * this_ptr))
} // namespace app::classes::SpellPickup
