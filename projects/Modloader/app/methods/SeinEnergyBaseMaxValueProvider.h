#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyBaseMaxValueProvider.h>

namespace app::classes::SeinEnergyBaseMaxValueProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0570, float, GetFloatValue, app::SeinEnergyBaseMaxValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::SeinEnergyBaseMaxValueProvider* this_ptr)
} // namespace app::classes::SeinEnergyBaseMaxValueProvider
