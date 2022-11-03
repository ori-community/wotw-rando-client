#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KickbackUtils {
    IL2CPP_REGISTER_METHOD(0x00E714E0, app::Vector3, ModifyDeathKickbackForce, (app::Vector3 damage_force, app::EntityWeightData_EntityWeight__Enum entity_weight, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00E71920, app::Vector2, GetBashKickbackForce, (app::Damage * damage, app::EntityWeightData_EntityWeight__Enum entity_weight))
    IL2CPP_REGISTER_METHOD(0x00E71A40, app::Vector3, DefaultHitKickbackForceModifier, (app::Damage * damage, app::Vector3 damage_force, app::EntityWeightData_EntityWeight__Enum entity_weight, bool is_on_ground, bool is_falling, app::Vector3 own_postion, app::Vector3 damage_owner_position, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHOD(0x00E72210, app::Vector3, AirHitKickbackForceModifier, (app::Vector3 damage_force, app::EntityWeightData_EntityWeight__Enum entity_weight))
    IL2CPP_REGISTER_METHOD(0x00E72540, app::Vector3, LightGroundHitKickbackForceModifier, (app::Vector3 damage_force, app::EntityWeightData_EntityWeight__Enum entity_weight, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00E72900, app::Vector3, BashKickbackForceModifier, (app::Vector3 damage_force, app::EntityWeightData_EntityWeight__Enum entity_weight, bool is_on_ground))
} // namespace app::classes::KickbackUtils
