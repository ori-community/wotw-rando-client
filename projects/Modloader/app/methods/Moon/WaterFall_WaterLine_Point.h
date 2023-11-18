#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterFall_WaterLine_Point.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::WaterFall_WaterLine_Point {
    IL2CPP_REGISTER_METHOD(0x011A77C0, void, ctor, (app::WaterFall_WaterLine_Point * this_ptr, app::Vector3 position, app::ParticleSystem* effect))
}
