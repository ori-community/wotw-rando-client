#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_Caster {
    IL2CPP_REGISTER_METHOD(0x01478B50, app::Vector3, TweakVelocity, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x01478B90, void, CheckNearTargets, (app::Vector3 entity_pos, app::Vector3 arc_initial_velo, app::Vector3 arc_from, app::Vector3 arc_to, float hit_tolerance, app::List_1_UnityEngine_Vector3_ * target_offsets_from_entity, app::Int32__Array * target_grid_address, app::MortarEntity_AimVeloCache_Grid * grid, app::Single__Array * arc_min_dist_to_target))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugDrawArc, (app::MortarEntity_AimVeloCache_EntityParams * entity, int32_t spit_origin_index, app::Vector3 initial_velo, app::Vector3 target_pos, app::Color color))
    IL2CPP_REGISTER_METHOD(0x01478ED0, void, CastArcForTargets, (app::MortarEntity_AimVeloCache_EntityParams * entity, int32_t spit_origin_index, app::Vector3 initial_velo, app::List_1_UnityEngine_Vector3_ * target_offsets_from_entity, app::MortarEntity_AimVeloCache_Grid * grid, app::Single__Array * arc_min_dist_to_target))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MortarEntity_AimVeloCache_Caster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014796F0, void, cctor, ())
}
