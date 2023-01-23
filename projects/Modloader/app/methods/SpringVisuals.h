#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpringVisuals.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::SpringVisuals {
    IL2CPP_REGISTER_METHOD(0x009A9D50, void, OnCollisionEnter, (app::SpringVisuals * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpringVisuals * this_ptr))
} // namespace app::classes::SpringVisuals
