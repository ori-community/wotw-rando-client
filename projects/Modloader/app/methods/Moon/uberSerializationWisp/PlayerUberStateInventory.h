#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/QuestItemType__Enum.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateInventory {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_*, get_Inventory, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_*, get_Bindings, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_*, get_QuestItems, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Keystones, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB20, void, set_Keystones, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_MapStones, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB30, void, set_MapStones, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Experience, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB40, void, set_Experience, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_Ore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB50, void, set_Ore, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_PartialHealthContainers, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB60, void, set_PartialHealthContainers, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_PartialEnergyContainers, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB70, void, set_PartialEnergyContainers, (app::PlayerUberStateInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_ExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB80, void, set_ExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_KeystoneHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AB90, void, set_KeystoneHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, get_EnergyOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABB0, void, set_EnergyOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_HealthOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABC0, void, set_HealthOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_SmallExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABD0, void, set_SmallExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00863130, bool, get_MediumExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABE0, void, set_MediumExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F3ABF0, bool, get_LargeExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AC00, void, set_LargeExpOrbHasBeenCollectedBefore, (app::PlayerUberStateInventory * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F3AC10, void, SetBinding_1, (app::PlayerUberStateInventory * this_ptr, app::EquipmentType__Enum type, app::PlayerUberStateInventory_InventoryItem* item))
    IL2CPP_REGISTER_METHOD(0x00F3AD20, void, SetBinding_2, (app::PlayerUberStateInventory * this_ptr, app::SpellInventory_Binding__Enum binding, app::PlayerUberStateInventory_InventoryItem* item))
    IL2CPP_REGISTER_METHOD(0x00F3AE00, void, InitializeBindings, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3AF50, void, RunSetDirtyCallback, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3B0E0, void, ctor, (app::PlayerUberStateInventory * this_ptr, app::Action* set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x00F3BC70, app::PlayerUberStateInventory_InventoryItem*, GrantItem, (app::PlayerUberStateInventory * this_ptr, app::EquipmentType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00F3BE30, void, ClearInventory, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3BEE0, bool, UsesEnergy, (app::EquipmentType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00F3BF40, void, GrantQuestItem, (app::PlayerUberStateInventory * this_ptr, app::QuestItemType__Enum item_type))
    IL2CPP_REGISTER_METHOD(0x00F3C0B0, bool, HasQuestItem, (app::PlayerUberStateInventory * this_ptr, app::QuestItemType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00F3C250, void, Save, (app::PlayerUberStateInventory * this_ptr, app::UberStateArchive* archive, app::PlayerUberStateInventory* inventory))
    IL2CPP_REGISTER_METHOD(0x00F3CD90, void, Load, (app::PlayerUberStateInventory * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F3D910, void, OnGui, (app::PlayerUberStateInventory * this_ptr, app::NavigableOnGUI* gui))
    IL2CPP_REGISTER_METHOD(0x00F3DDC0, int64_t, get_Size, (app::PlayerUberStateInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3DEB0, int32_t, IndexOf, (app::PlayerUberStateInventory * this_ptr, app::PlayerUberStateInventory_InventoryItem* item))
    IL2CPP_REGISTER_METHOD(0x00F3DFB0, void, cctor, ())
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateInventory
