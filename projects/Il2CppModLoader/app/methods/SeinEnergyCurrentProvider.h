#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinEnergyCurrentProvider {
    IL2CPP_REGISTER_METHOD(0x00AD0710, float, GetFloatValue, (app::SeinEnergyCurrentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinEnergyCurrentProvider * this_ptr))
}
