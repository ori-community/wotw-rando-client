#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldRotation.h>

namespace app::classes::WorldRotation {
    IL2CPP_REGISTER_METHOD(0x0058D120, void, FixedUpdate, (app::WorldRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WorldRotation * this_ptr))
} // namespace app::classes::WorldRotation
