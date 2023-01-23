#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InventoryScreenItem.h>

namespace app::classes::InventoryScreenItem {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryScreenItem * this_ptr))
}
