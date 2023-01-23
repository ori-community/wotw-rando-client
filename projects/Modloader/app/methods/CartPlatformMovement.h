#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/CartPlatformMovement.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CartPlatformMovement {
    IL2CPP_REGISTER_METHOD(0x00B3D890, app::Vector2, WorldToLocal, (app::CartPlatformMovement * this_ptr, app::Vector2 world))
    IL2CPP_REGISTER_METHOD(0x00B3D9D0, app::Vector2, LocalToWorld, (app::CartPlatformMovement * this_ptr, app::Vector2 local))
    IL2CPP_REGISTER_METHOD(0x00B3DAE0, app::Vector2, CalculatePositionDelta, (app::CartPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3DC50, void, Move, (app::CartPlatformMovement * this_ptr, app::Vector3 move))
    IL2CPP_REGISTER_METHOD(0x00B3DDD0, bool, OnUpdate, (app::CartPlatformMovement * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B3E620, void, ctor, (app::CartPlatformMovement * this_ptr))
} // namespace app::classes::CartPlatformMovement
