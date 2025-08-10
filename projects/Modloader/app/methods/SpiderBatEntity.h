#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/SpiderBatEntity.h>
#include <Modloader/app/structs/SpiderBatEntity_AttackSet__Enum.h>
#include <Modloader/app/structs/SpiderBatEntity_ModelVariation__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBatEntity {
    IL2CPP_REGISTER_METHOD(0x00956A60, app::ConfigurableJoint*, GetGeneratedConfigurableJoint, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956A70, bool, GetIsAttacking, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetAllowShriek, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956A80, bool, GetIsStunned, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755600, bool, GetIsAggro, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AA0, bool, GetAllowClimb, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AB0, bool, GetIsClimbedUp, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AC0, int32_t, GetAttacksSinceClimbedUp, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AD0, int32_t, AttacksToClimb, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AE0, app::Action_1_Damage_*, get_ReceivedDamageEvent, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956AF0, void, set_ReceivedDamageEvent, app::SpiderBatEntity* this_ptr, app::Action_1_Damage_* value)
    IL2CPP_REGISTER_METHOD(0x00956B00, void, ResolveDamage, app::SpiderBatEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00956CA0, void, SetIsAttacking, app::SpiderBatEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00956DA0, float, ForceFromDamage, app::SpiderBatEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00956E40, void, OnAwake, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00957020, void, ResetClimbDirection, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00957040, void, ResetEntity, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009573A0, void, FixedUpdate, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00957BD0, void, LateUpdate, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00957C00, void, AdjustAttacks, app::SpiderBatEntity* this_ptr, app::SpiderBatEntity_AttackSet__Enum attacks)
    IL2CPP_REGISTER_METHOD(0x00957F50, void, SetModelVariation, app::SpiderBatEntity* this_ptr, app::SpiderBatEntity_ModelVariation__Enum variation)
    IL2CPP_REGISTER_METHOD(0x00958070, void, UpdateWebRopeVisuals, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009585D0, void, StunnedWhileAttacking, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009585E0, void, DetachFromRope, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009586F0, void, AttachToRope, app::SpiderBatEntity* this_ptr, app::Rope* rope, bool attach_to_end)
    IL2CPP_REGISTER_METHOD(0x009590E0, void, PerformAttachment, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00959740, void, BreakAttachment, app::SpiderBatEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00959830, bool, ClimbRope, app::SpiderBatEntity* this_ptr, float distance, bool ignore_curve)
    IL2CPP_REGISTER_METHOD(0x0095AE00, void, ApplyForce, app::SpiderBatEntity* this_ptr, app::Vector3 force)
    IL2CPP_REGISTER_METHOD(0x0095B4F0, void, ctor, app::SpiderBatEntity* this_ptr)
} // namespace app::classes::SpiderBatEntity
