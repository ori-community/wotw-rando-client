#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AimCrosshair.h>

namespace app::classes::AimCrosshair {
    IL2CPP_REGISTER_METHOD(0x004F0EC0, void, FixedUpdate, (app::AimCrosshair * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AimCrosshair * this_ptr))
} // namespace app::classes::AimCrosshair
