#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyCurrentProvider.h>

namespace app::classes::SeinEnergyCurrentProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0710, float, GetFloatValue, app::SeinEnergyCurrentProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinEnergyCurrentProvider* this_ptr)
} // namespace app::classes::SeinEnergyCurrentProvider
