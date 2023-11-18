#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InventoryScreenPickupElements.h>

namespace app::classes::InventoryScreenPickupElements {
    IL2CPP_REGISTER_METHOD(0x00643C10, void, Setup, (app::InventoryScreenPickupElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00643D40, void, UpdateElements, (app::InventoryScreenPickupElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryScreenPickupElements * this_ptr))
} // namespace app::classes::InventoryScreenPickupElements
