#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW.h>
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Array.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>

namespace app::classes::SceneMetaData_SeinInitialValuesWotW {
    IL2CPP_REGISTER_METHOD(0x00BAF570, void, ApplyInitialValues, (app::SceneMetaData_SeinInitialValuesWotW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAFE70, void, AssignAbilities, (app::PlayerAbilities * abilities, app::SceneMetaData_SeinAbilitiesWotW* abilities))
    IL2CPP_REGISTER_METHOD(0x00BB0240, void, AssignSpells, (app::SceneMetaData_SeinEquipmentWotW__Array * other_equipment))
    IL2CPP_REGISTER_METHOD(0x00BB02A0, void, RegisterDefaultEquipment, (app::SceneMetaData_SeinEquipmentWotW * equipment, app::SpellInventory_Binding__Enum binding))
    IL2CPP_REGISTER_METHOD(0x00BB0450, app::PlayerUberStateInventory_InventoryItem*, RegisterEquipment, (app::SceneMetaData_SeinEquipmentWotW * equipment))
    IL2CPP_REGISTER_METHOD(0x00BB0530, void, ctor, (app::SceneMetaData_SeinInitialValuesWotW * this_ptr))
} // namespace app::classes::SceneMetaData_SeinInitialValuesWotW
