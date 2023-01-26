#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleEnemy_Joint.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletBody_Point.h>

namespace app::classes::TentacleEnemy_Joint {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::TentacleEnemy_Joint * this_ptr, app::Transform* transform, app::VerletBody_Point* physical_point))
}
