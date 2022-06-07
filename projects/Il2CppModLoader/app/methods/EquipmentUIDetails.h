#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EquipmentUIDetails {
    IL2CPP_REGISTER_METHOD(0x00977730, void, Awake, (app::EquipmentUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00977740, void, OnNewItemHighlighted, (app::EquipmentUIDetails * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHOD(0x00977800, void, Show, (app::EquipmentUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::EquipmentUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009778D0, void, SetItem, (app::EquipmentUIDetails * this_ptr, app::PlayerUberStateInventory_InventoryItem * item))
    IL2CPP_REGISTER_METHOD(0x009779D0, void, UpdateContext, (app::EquipmentUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00977D30, void, ctor, (app::EquipmentUIDetails * this_ptr))
}
