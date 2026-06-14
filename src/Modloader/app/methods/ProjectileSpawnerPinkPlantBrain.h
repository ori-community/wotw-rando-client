#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain.h>

namespace app::classes::ProjectileSpawnerPinkPlantBrain {
    IL2CPP_REGISTER_METHOD(0x00C7DAD0, void, OnFixedUpdate, app::ProjectileSpawnerPinkPlantBrain* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00C7DC70, void, ctor, app::ProjectileSpawnerPinkPlantBrain* this_ptr)
} // namespace app::classes::ProjectileSpawnerPinkPlantBrain
