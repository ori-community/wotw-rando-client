#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualNormalizedProvider.h>

namespace app::classes::SeinEnergyMaxVisualNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00AD07D0, float, GetFloatValue, (app::SeinEnergyMaxVisualNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinEnergyMaxVisualNormalizedProvider * this_ptr))
} // namespace app::classes::SeinEnergyMaxVisualNormalizedProvider
