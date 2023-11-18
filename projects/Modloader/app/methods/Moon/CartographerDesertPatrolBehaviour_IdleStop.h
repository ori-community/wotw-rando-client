#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop.h>

namespace app::classes::Moon::CartographerDesertPatrolBehaviour_IdleStop {
    IL2CPP_REGISTER_METHOD(0x00CC3890, app::Transform*, get_PositionRight, (app::CartographerDesertPatrolBehaviour_IdleStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC3A00, app::Transform*, get_PositionLeft, (app::CartographerDesertPatrolBehaviour_IdleStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC3B70, void, ctor, (app::CartographerDesertPatrolBehaviour_IdleStop * this_ptr))
} // namespace app::classes::Moon::CartographerDesertPatrolBehaviour_IdleStop
