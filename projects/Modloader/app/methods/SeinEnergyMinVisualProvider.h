#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinEnergyMinVisualProvider.h>

namespace app::classes::SeinEnergyMinVisualProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0A30, float, GetFloatValue, (app::SeinEnergyMinVisualProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinEnergyMinVisualProvider * this_ptr))
} // namespace app::classes::SeinEnergyMinVisualProvider
