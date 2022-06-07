#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AimCrosshair {
    IL2CPP_REGISTER_METHOD(0x004F0EC0, void, FixedUpdate, (app::AimCrosshair * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AimCrosshair * this_ptr))
}
