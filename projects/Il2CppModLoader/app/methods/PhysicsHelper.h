#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicsHelper {
    IL2CPP_REGISTER_METHOD(0x014FF820, void, AddForceSafe_1, (app::Rigidbody * rigidbody, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x014FF9F0, void, AddForceSafe_2, (app::Rigidbody * rigidbody, app::Vector2 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x014FFBD0, void, AddRelativeForce, (app::Rigidbody * rigidbody, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x014FFDA0, void, AddRelativeForceSafe, (app::Rigidbody * rigidbody, app::Vector2 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x014FFF80, void, IgnoreAllIntercollisionsBetweenChildren, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x015000A0, app::Vector3, CalculateAverageNormalFromContactPoints, (app::ContactPoint__Array * contacts))
    IL2CPP_REGISTER_METHOD(0x01500290, app::Vector3, CalculateAverageGroundNormalFromContactPoints, (app::ContactPoint__Array * contacts))
    IL2CPP_REGISTER_METHOD(0x01500530, void, CalculateArcTrajectory, (float gravity, app::Vector3 delta, float * time, app::Vector2 * speed, float height))
    IL2CPP_REGISTER_METHOD(0x015007F0, void, CalculateVerticalSpeed, (float gravity, app::Vector3 delta, float speed_x, float * speed_y))
    IL2CPP_REGISTER_METHOD(0x01500820, app::Vector2, CalculateArcForce_1, (app::Vector2 origin, app::Vector2 final_point, float gravity, app::Vector2 arc_peak))
    IL2CPP_REGISTER_METHOD(0x01500A40, bool, CalculateArcForce_2, (app::Vector2 origin, app::Vector2 final_point, float gravity, float speed, app::Vector2 * force_low, app::Vector2 * force_high))
    IL2CPP_REGISTER_METHOD(0x01500D20, void, CalculateBestArcForce, (app::Vector2 origin, app::Vector2 final_point, float gravity, float speed, app::Vector2 * force_low, app::Vector2 * force_high))
    IL2CPP_REGISTER_METHOD(0x01501030, app::Vector2, CalculateArcForceBySpeed, (app::Vector2 start_location, app::Vector2 end_location, float gravity, float speed, float peak, float rot))
    IL2CPP_REGISTER_METHOD(0x015011E0, app::Vector2, CalculateArcForce_3, (app::Vector2 origin, app::Vector2 final_point, float gravity, app::Vector2 arc_peak, float * duration))
    IL2CPP_REGISTER_METHOD(0x01501410, app::Vector2, CalculateArcForceVariablePeak, (app::Vector2 origin, app::Vector2 final_point, float gravity, app::Vector2 arc_peak, float * duration))
    IL2CPP_REGISTER_METHOD(0x01501670, app::Vector2, CalculateArcForce_4, (app::Vector2 origin, app::Vector2 final_point, float gravity, float character_height))
    IL2CPP_REGISTER_METHOD(0x01501830, app::Vector2, CalculateArcForceForKnownTime, (app::Vector2 origin, app::Vector2 target, float gravity, float time))
    IL2CPP_REGISTER_METHOD(0x01501940, bool, ArcSphereCast, (float gravity, float radius, app::Vector3 origin, app::Vector3 speed, float duration, app::LayerMask layer_mask, app::GameObject * target, app::RaycastHit * final_hit_info, float hit_tolerance))
    IL2CPP_REGISTER_METHOD(0x01501EE0, bool, ArcRayCast, (float gravity, app::Vector3 origin, app::Vector3 speed, float duration, app::LayerMask layer_mask, app::GameObject * target, float hit_tolerance))
    IL2CPP_REGISTER_METHOD(0x01502540, float, CalculateSpeedFromHeight, (float height, float gravity))
    IL2CPP_REGISTER_METHOD(0x01502600, float, CalculateHeightFromSpeed, (float speed, float gravity))
    IL2CPP_REGISTER_METHOD(0x01502620, app::Vector2, CalculateJumpPeak_1, (app::Vector2 from_position, app::Vector2 jump_speed, app::Vector2 gravity))
    IL2CPP_REGISTER_METHOD(0x015028A0, app::Vector2, CalculateJumpPeak_2, (app::Vector2 from, app::Vector2 to, float extra_height, float from_weight, float to_weight))
    IL2CPP_REGISTER_METHOD(0x015029C0, void, cctor, ())
}
