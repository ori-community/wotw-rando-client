#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinMaxEnergyValueProvider {
    IL2CPP_REGISTER_METHOD(0x008A2B60, float, GetFloatValue, (app::SeinMaxEnergyValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinMaxEnergyValueProvider * this_ptr))
}
