#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritLightTurbulence {
    IL2CPP_REGISTER_METHOD(0x00D63080, float, get_TurbulenceValueInThisFrame, (app::SpiritLightTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, ctor, (app::SpiritLightTurbulence * this_ptr))
}
