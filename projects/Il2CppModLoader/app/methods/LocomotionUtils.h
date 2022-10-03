#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocomotionUtils {
    IL2CPP_REGISTER_METHOD(0x00FCA1F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawObstacleHitAvoidanceGizmos, ())
    IL2CPP_REGISTER_METHOD(0x00FCA2A0, app::Vector3, GetGroundProjectedPoint, (app::Vector3 point, float offset))
    IL2CPP_REGISTER_METHOD(0x00FCA5D0, app::Vector3, GetGroundProjectedTargetPosition, (app::Vector3 target_position, app::Vector3 gravity_direction, float offset_y, app::LayerMask layer_mask, int32_t* request_id, float ray_length))
    IL2CPP_REGISTER_METHOD(0x00FCA7E0, bool, ApplyCollisionAvoidance, (app::Vector2 * velocity, app::LocomotionUtils_CollisionAvoidanceSettings settings, float* obstacle_avoidance_strength, int32_t* request_id, bool use_batched))
    IL2CPP_REGISTER_METHOD(0x00FCB290, void, cctor, ())
} // namespace app::classes::LocomotionUtils
