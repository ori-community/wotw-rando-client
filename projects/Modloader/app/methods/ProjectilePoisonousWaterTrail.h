#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProjectilePoisonousWaterTrail.h>

namespace app::classes::ProjectilePoisonousWaterTrail {
    IL2CPP_REGISTER_METHOD(0x00C7BB60, void, OnEnable, (app::ProjectilePoisonousWaterTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7BD60, void, OnDisable, (app::ProjectilePoisonousWaterTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7BDB0, void, FixedUpdate, (app::ProjectilePoisonousWaterTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7BFF0, void, ctor, (app::ProjectilePoisonousWaterTrail * this_ptr))
} // namespace app::classes::ProjectilePoisonousWaterTrail
