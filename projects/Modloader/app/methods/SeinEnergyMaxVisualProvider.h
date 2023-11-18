#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyMaxVisualProvider.h>

namespace app::classes::SeinEnergyMaxVisualProvider {
    IL2CPP_REGISTER_METHOD(0x00AD08A0, float, GetFloatValue, (app::SeinEnergyMaxVisualProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinEnergyMaxVisualProvider * this_ptr))
} // namespace app::classes::SeinEnergyMaxVisualProvider
