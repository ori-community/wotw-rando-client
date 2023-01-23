#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiritLightTurbulence.h>

namespace app::classes::SpiritLightTurbulence {
    IL2CPP_REGISTER_METHOD(0x00D63080, float, get_TurbulenceValueInThisFrame, (app::SpiritLightTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, ctor, (app::SpiritLightTurbulence * this_ptr))
} // namespace app::classes::SpiritLightTurbulence
