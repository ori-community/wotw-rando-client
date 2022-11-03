#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::InventoryItem {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUnlocked, (app::InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063EE50, void, OnEnable, (app::InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063EF50, void, Refresh, (app::InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F0D0, void, Activate, (app::InventoryItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryItem * this_ptr))
} // namespace app::classes::InventoryItem
