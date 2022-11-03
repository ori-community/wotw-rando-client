#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::InventoryScreenHealthEnergyElements {
    IL2CPP_REGISTER_METHOD(0x006435E0, int32_t, get_HealthCellCount, (app::InventoryScreenHealthEnergyElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006436E0, int32_t, get_EnergyCellCount, (app::InventoryScreenHealthEnergyElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006437D0, void, Setup, (app::InventoryScreenHealthEnergyElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00643920, void, UpdateElements, (app::InventoryScreenHealthEnergyElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryScreenHealthEnergyElements * this_ptr))
} // namespace app::classes::InventoryScreenHealthEnergyElements
