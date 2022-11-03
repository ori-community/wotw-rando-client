#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EquipmentUIInventoryItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSelected, (app::EquipmentUIInventoryItem * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EquipmentUIInventoryItem * this_ptr))
} // namespace app::classes::EquipmentUIInventoryItem
