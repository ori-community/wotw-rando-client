#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SphericalWaterZone {
    IL2CPP_REGISTER_METHOD(0x00952F70, bool, Contains, (app::SphericalWaterZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00953120, void, FixedUpdate, (app::SphericalWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00953C00, void, ctor, (app::SphericalWaterZone * this_ptr))
}
