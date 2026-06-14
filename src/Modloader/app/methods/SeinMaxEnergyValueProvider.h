#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMaxEnergyValueProvider.h>

namespace app::classes::SeinMaxEnergyValueProvider {
    IL2CPP_REGISTER_METHOD(0x008A2B60, float, GetFloatValue, app::SeinMaxEnergyValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::SeinMaxEnergyValueProvider* this_ptr)
} // namespace app::classes::SeinMaxEnergyValueProvider
