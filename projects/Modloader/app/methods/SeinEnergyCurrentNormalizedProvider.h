#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyCurrentNormalizedProvider.h>

namespace app::classes::SeinEnergyCurrentNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0630, float, GetFloatValue, (app::SeinEnergyCurrentNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinEnergyCurrentNormalizedProvider * this_ptr))
} // namespace app::classes::SeinEnergyCurrentNormalizedProvider
