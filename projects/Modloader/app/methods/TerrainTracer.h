#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TerrainTracer.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TerrainTracer {
    IL2CPP_REGISTER_METHOD(0x010D85E0, void, Init, (app::TerrainTracer * this_ptr, app::PlatformMovement* plataform_movement, app::Transform* origin))
    IL2CPP_REGISTER_METHOD(0x010D8610, bool, SafeAreaAhead, (app::TerrainTracer * this_ptr, bool is_facing_left))
    IL2CPP_REGISTER_METHOD(0x010D8DC0, bool, GroundExistsBellowPoint, (app::TerrainTracer * this_ptr, app::Vector3 point, float max_distance))
    IL2CPP_REGISTER_METHOD(0x010D8F40, bool, IsNormalForGround, (app::TerrainTracer * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x010D9030, void, ctor, (app::TerrainTracer * this_ptr))
} // namespace app::classes::TerrainTracer
