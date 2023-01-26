#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RollingRockParticlesController.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::RollingRockParticlesController {
    IL2CPP_REGISTER_METHOD(0x01366C00, void, Start, (app::RollingRockParticlesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01366DF0, void, Update, (app::RollingRockParticlesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013670F0, void, OnCollisionStay, (app::RollingRockParticlesController * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RollingRockParticlesController * this_ptr))
} // namespace app::classes::RollingRockParticlesController
