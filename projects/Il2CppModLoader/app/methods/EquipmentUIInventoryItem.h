#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EquipmentUIInventoryItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSelected, (app::EquipmentUIInventoryItem * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EquipmentUIInventoryItem * this_ptr))
}
