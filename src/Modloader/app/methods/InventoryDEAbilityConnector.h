#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InventoryDEAbilityConnector.h>

namespace app::classes::InventoryDEAbilityConnector {
    IL2CPP_REGISTER_METHOD(0x0063EC90, void, OnEnable, app::InventoryDEAbilityConnector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::InventoryDEAbilityConnector* this_ptr)
} // namespace app::classes::InventoryDEAbilityConnector
