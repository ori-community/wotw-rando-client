#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMaxEnergyNormalizedValueProvider.h>

namespace app::classes::SeinMaxEnergyNormalizedValueProvider {
    IL2CPP_REGISTER_METHOD(0x008A2A90, float, GetFloatValue, (app::SeinMaxEnergyNormalizedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2B50, void, ctor, (app::SeinMaxEnergyNormalizedValueProvider * this_ptr))
} // namespace app::classes::SeinMaxEnergyNormalizedValueProvider
