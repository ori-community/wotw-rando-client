#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonWater {
    IL2CPP_REGISTER_METHOD(0x014751F0, void, Start, (app::MoonWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MoonWater * this_ptr))
} // namespace app::classes::MoonWater
