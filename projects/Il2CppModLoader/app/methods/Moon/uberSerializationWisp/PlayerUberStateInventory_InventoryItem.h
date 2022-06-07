#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateInventory_InventoryItem {
    IL2CPP_REGISTER_METHOD(0x00F3E1C0, void, ctor_1, (app::PlayerUberStateInventory_InventoryItem * this_ptr, app::EquipmentType__Enum type, app::Action * set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x00F3E4A0, void, ctor_2, (app::PlayerUberStateInventory_InventoryItem * this_ptr, app::UberStateArchive * archive, app::Action * set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EquipmentType__Enum, get_Type, (app::PlayerUberStateInventory_InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3E760, void, set_Type, (app::PlayerUberStateInventory_InventoryItem * this_ptr, app::EquipmentType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_IsNew, (app::PlayerUberStateInventory_InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3E790, void, set_IsNew, (app::PlayerUberStateInventory_InventoryItem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_Gained, (app::PlayerUberStateInventory_InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3E7C0, void, set_Gained, (app::PlayerUberStateInventory_InventoryItem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F3E7F0, bool, get_UsesEnergy, (app::PlayerUberStateInventory_InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3E8E0, bool, UsesEnergyCheck, (app::PlayerUberStateInventory_InventoryItem * this_ptr, app::EquipmentType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00F3E9D0, void, Serialize, (app::PlayerUberStateInventory_InventoryItem * this_ptr, app::UberStateArchive * ar))
    IL2CPP_REGISTER_METHOD(0x00F3EA60, void, RunSetDirtyCallback, (app::PlayerUberStateInventory_InventoryItem * this_ptr))
}
