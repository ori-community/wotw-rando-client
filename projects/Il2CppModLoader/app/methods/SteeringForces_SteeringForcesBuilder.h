#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SteeringForces_SteeringForcesBuilder {
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_Value, (app::SteeringForces_SteeringForcesBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064EBB0, void, Reset, (app::SteeringForces_SteeringForcesBuilder * this_ptr, app::SteeringForcesSettings * settings))
    IL2CPP_REGISTER_METHOD(0x0064EC70, app::SteeringForces_SteeringForcesBuilder *, AddNoise, (app::SteeringForces_SteeringForcesBuilder * this_ptr, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x0064EE40, app::SteeringForces_SteeringForcesBuilder *, AddDirectionAvoidance, (app::SteeringForces_SteeringForcesBuilder * this_ptr, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x0064F350, app::Vector3, DirectionAvoidance, (app::SteeringForces_SteeringForcesBuilder * this_ptr, app::Vector3 origin, app::SteeringForcesAngleAvoidanceSettings * angle_avoidance, app::Vector3 direction, float offset, float distance, int32_t amount_of_rays, float avoidance_scale, app::SteeringForces_AvoidanceCurve__Enum curve, bool use_offseted_direction, bool reflect))
    IL2CPP_REGISTER_METHOD(0x0064FCB0, bool, PassedValidation, (app::SteeringForces_SteeringForcesBuilder * this_ptr, app::Collider * hit_collider))
    IL2CPP_REGISTER_METHOD(0x0064FD60, float, ApplyAvoidanceCurve, (float scale, float normalized_distance, app::SteeringForces_AvoidanceCurve__Enum curve))
    IL2CPP_REGISTER_METHOD(0x0064FE90, app::Vector3, CalculateAvoidanceFromTarget, (app::Vector3 origin, app::Vector3 avoidance_target, float distance, float avoidance_scale, bool draw_gizmo))
    IL2CPP_REGISTER_METHOD(0x00650080, void, ctor, (app::SteeringForces_SteeringForcesBuilder * this_ptr))
}
