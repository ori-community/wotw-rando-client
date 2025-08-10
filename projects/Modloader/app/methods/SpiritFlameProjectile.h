#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/ISpiritFlameAttackable.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpiritFlame.h>
#include <Modloader/app/structs/SpiritFlameProjectile.h>
#include <Modloader/app/structs/SpiritFlameProjectile_PointOnArc.h>
#include <Modloader/app/structs/SpiritFlameProjectile_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritFlameProjectile {
    IL2CPP_REGISTER_METHOD(0x011D4750, bool, get_IsSuspended, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4760, void, set_IsSuspended, app::SpiritFlameProjectile* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0062C500, app::SuspendableMask__Enum, get_Mask, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0062C510, void, set_Mask, app::SpiritFlameProjectile* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::Transform*, get_StartTarget, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_StartTarget, app::SpiritFlameProjectile* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::SeinCharacter*, get_Sein, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_Sein, app::SpiritFlameProjectile* this_ptr, app::SeinCharacter* value)
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Transform*, get_AttackableTargetTransform, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_AttackableTargetTransform, app::SpiritFlameProjectile* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::IAttackable*, get_AttackableTarget, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_AttackableTarget, app::SpiritFlameProjectile* this_ptr, app::IAttackable* value)
    IL2CPP_REGISTER_METHOD(0x011D4770, app::Vector3, get_StartPosition, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4790, void, set_StartPosition, app::SpiritFlameProjectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::SpiritFlame*, get_SpiritFlame, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_SpiritFlame, app::SpiritFlameProjectile* this_ptr, app::SpiritFlame* value)
    IL2CPP_REGISTER_METHOD(0x011D47B0, float, get_Damage, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D47C0, void, set_Damage, app::SpiritFlameProjectile* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x010B5C80, app::DamageWeight__Enum, get_DamageWeight, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D47D0, void, set_DamageWeight, app::SpiritFlameProjectile* this_ptr, app::DamageWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x00875720, bool, get_PreventKickback, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD90B0, void, set_PreventKickback, app::SpiritFlameProjectile* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011D47E0, void, PlayThrowSound, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4A50, void, PlayHitSound, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4CC0, void, Awake, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4E80, void, OnDestroy, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4F20, void, OnPoolSpawned, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D5060, void, Start, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011976A0, void, ChangeState, app::SpiritFlameProjectile* this_ptr, app::SpiritFlameProjectile_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x011D5A60, bool, TargetHasMovedTooMuch, app::SpiritFlameProjectile* this_ptr, app::Vector3 new_pos)
    IL2CPP_REGISTER_METHOD(0x011D5B70, void, UpdateTargetPosition, app::SpiritFlameProjectile* this_ptr, app::Vector3 new_pos)
    IL2CPP_REGISTER_METHOD(0x011D5B90, float, GetArcFrac, app::SpiritFlameProjectile* this_ptr, int32_t point_index, int32_t number_of_points)
    IL2CPP_REGISTER_METHOD(0x011D5BB0, void, UpdateArcUnitVectors, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D5D80, app::Vector3, GetPointOnArc_1, app::SpiritFlameProjectile* this_ptr, float frac, float curve)
    IL2CPP_REGISTER_METHOD(0x011D5FA0, app::Vector3, GetPointOnArc_2, app::SpiritFlameProjectile* this_ptr, app::SpiritFlameProjectile_PointOnArc poa)
    IL2CPP_REGISTER_METHOD(
        0x011D5FF0,
        app::Vector2,
        GetPointOnArcDelta,
        app::SpiritFlameProjectile* this_ptr,
        app::SpiritFlameProjectile_PointOnArc start_p_o_a,
        app::SpiritFlameProjectile_PointOnArc end_p_o_a
    )
    IL2CPP_REGISTER_METHOD(
        0x011D61E0,
        app::SpiritFlameProjectile_PointOnArc,
        CachePointOnArc_1,
        app::SpiritFlameProjectile* this_ptr,
        int32_t point_index,
        int32_t number_of_points
    )
    IL2CPP_REGISTER_METHOD(0x011D6270, app::SpiritFlameProjectile_PointOnArc, CachePointOnArc_2, app::SpiritFlameProjectile* this_ptr, float r)
    IL2CPP_REGISTER_METHOD(0x011D62F0, void, CachePointsOnArc, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D6400, app::Vector2, GetHitVector, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D6440, void, UpdateLineRenderer, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D6D50, void, UpdateState, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D7860, void, DamageTicked, app::SpiritFlameProjectile* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x011D79E0, void, Detonate, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D7DE0, void, Discharge, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D7DF0, bool, RayTest, app::SpiritFlameProjectile* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x011D81A0, app::ISpiritFlameAttackable*, IsShootableTarget, app::SpiritFlameProjectile* this_ptr, app::Collider* target)
    IL2CPP_REGISTER_METHOD(0x011D8580, void, FixedUpdate, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D88D0, void, ctor, app::SpiritFlameProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D8B00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01032B30, void, _Detonate_b__106_0, app::SpiritFlameProjectile* this_ptr)
} // namespace app::classes::SpiritFlameProjectile
