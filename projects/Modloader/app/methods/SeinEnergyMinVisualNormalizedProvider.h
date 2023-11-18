#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyMinVisualNormalizedProvider.h>

namespace app::classes::SeinEnergyMinVisualNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0960, float, GetFloatValue, (app::SeinEnergyMinVisualNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinEnergyMinVisualNormalizedProvider * this_ptr))
} // namespace app::classes::SeinEnergyMinVisualNormalizedProvider
