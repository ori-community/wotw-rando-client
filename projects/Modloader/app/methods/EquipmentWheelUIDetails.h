#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EquipmentWheelUIDetails.h>
#include <Modloader/app/structs/SpellUIItem.h>

namespace app::classes::EquipmentWheelUIDetails {
    IL2CPP_REGISTER_METHOD(0x00981340, void, Awake, app::EquipmentWheelUIDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00981350, void, SetItem, app::EquipmentWheelUIDetails* this_ptr, app::SpellUIItem* ui_item, bool force_update)
    IL2CPP_REGISTER_METHOD(0x009815A0, void, UpdatePosition, app::EquipmentWheelUIDetails* this_ptr, app::SpellUIItem* ui_item)
    IL2CPP_REGISTER_METHOD(0x00981960, void, UpdateContext, app::EquipmentWheelUIDetails* this_ptr, bool to_right)
    IL2CPP_REGISTER_METHOD(0x00981CA0, void, ctor, app::EquipmentWheelUIDetails* this_ptr)
} // namespace app::classes::EquipmentWheelUIDetails
