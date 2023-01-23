#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>

namespace app::classes::Moon::WaterFallMask_WaterLineGroup {
    IL2CPP_REGISTER_METHOD(0x00F28280, void, ctor, (app::WaterFallMask_WaterLineGroup * this_ptr, app::Vector2 start, app::Vector2 end, float width, app::Vector2__Array* static_collision_points, app::ParticleSystem__Array* static_collision_particles))
}
