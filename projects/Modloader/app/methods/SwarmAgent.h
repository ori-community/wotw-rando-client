#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SwarmAgent_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SwarmAgent.h>
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SwarmAgent {
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Transform*, get_Target, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Target, app::SwarmAgent* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x006771C0, float, get_YRotation, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00677290, float, get_XRotation, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00677360, void, InitAgent, app::SwarmAgent* this_ptr, app::SwarmEntity* entity, app::Transform* new_target)
    IL2CPP_REGISTER_METHOD(0x00677720, void, InitStateMachine, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetTargetTransform, app::SwarmAgent* this_ptr, app::Transform* new_target)
    IL2CPP_REGISTER_METHOD(0x00679790, void, HardSetTargetTransform, app::SwarmAgent* this_ptr, app::Transform* new_target)
    IL2CPP_REGISTER_METHOD(0x00679A30, void, UpdateAgent, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00679B90, bool, IsInIdle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00679BF0, bool, IsAttacking, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00679C60, bool, IsActiveState, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00679CC0,
        void,
        Attack,
        app::SwarmAgent* this_ptr,
        app::Vector3 target_position,
        app::Transform* after_attack_transform,
        float max_tracking_distance,
        bool allow_overshoot
    )
    IL2CPP_REGISTER_METHOD(0x0067A2B0, void, PreMinigunAttack, app::SwarmAgent* this_ptr, app::Transform* follow_target)
    IL2CPP_REGISTER_METHOD(0x0067A2C0, void, MinigunAttack, app::SwarmAgent* this_ptr, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x0067A410, void, ChainAttack, app::SwarmAgent* this_ptr, app::Action_1_SwarmAgent_* on_chain_attack)
    IL2CPP_REGISTER_METHOD(0x0067A450, void, ForceIdleAfterAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067A5B0, void, ForceIdleAfterMinigun, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067A630, void, Idle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067A670, void, RandomizeInternalIdle_1, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067A6B0, void, RandomizeInternalIdle_2, app::SwarmAgent* this_ptr, float freq, float shift, float amplitude)
    IL2CPP_REGISTER_METHOD(0x0067A820, void, SetInternalIdle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067A670, void, OnEnterIdle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067AAB0, void, OnUpdateIdle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067B170, void, OnEnterAttacking, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067B1B0, void, OnUpdateAttacking, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067B950, void, OnUpdateMiniGun, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067C460, void, OnEnterAfterMiniGun, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067C4E0, void, OnUpdateAfterMiniGun, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067CBD0, void, OnExitAfterMiniGun, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067CC40, void, OnEnterChainAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067CDB0, void, OnUpdateChainAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitChainAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067E0B0, void, OnEnterAfterAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067E0C0, void, OnUpdateAfterAttack, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067E8F0, void, OnEnterDying, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067EF60, void, OnUpdateDying, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067F900, void, OnEnterSpawn, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0067F960, void, OnUpdateSpawn, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00680220, void, OnUpdateKnockback, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00680AE0, bool, InRangeOfTarget, app::SwarmAgent* this_ptr, float range, app::Vector3 target_pos)
    IL2CPP_REGISTER_METHOD(0x00680C90, void, KnockbakcScaleUp, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00680FC0, void, LateUpdate, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006816C0, void, Respawn, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00681710, void, Reset, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00681AD0,
        app::Vector3,
        GetBezierPosition,
        app::SwarmAgent* this_ptr,
        app::Vector3 pos_a,
        app::Vector3 mid_point,
        app::Vector3 pos_b,
        float t
    )
    IL2CPP_REGISTER_METHOD(0x00681D70, app::Vector3, GetRandomUnacurracy, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00681E40, bool, IsDying, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00681E80, bool, IsDead, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeFlamed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeDashed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritFlamed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsStompBouncable, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHeavySpiritSlashed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleported, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGlowed, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00681F30, void, OnRecieveDamage, app::SwarmAgent* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00682570, void, Kill, app::SwarmAgent* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageDealt, app::SwarmAgent* this_ptr, app::DamageDealer* dealer, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAttackColors, app::SwarmAgent* this_ptr, float percentage)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateVisuals, app::SwarmAgent* this_ptr, bool reset)
    IL2CPP_REGISTER_METHOD(0x006826A0, void, SetDamageDealerValue, app::SwarmAgent* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006826C0, void, RandomizeVisuals, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00682970, void, ctor, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::SwarmAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::SwarmAgent* this_ptr)
} // namespace app::classes::SwarmAgent
