#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/LizardSpawnType__Enum.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LizardEntity {
    IL2CPP_REGISTER_METHOD(0x00FAC8C0, bool, get_IsInOneTwoThreeAttackRange, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FC3F0, bool, get_MeetsRetaliationConditions, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FC420, void, set_MeetsRetaliationConditions, app::LizardEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00FAC8F0, bool, get_IsInQuickAttackAttackRange, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAC920, bool, get_IsInOneTwoThreeCounterattackRange, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAC950, bool, get_IsInQuickBiteCounterattackRange, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAC980, bool, get_GroupBehaviourMode, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACA30, float, get_GroupBehaviourBaseAttackCooldown, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACA40, bool, get_IsInPounceAttackRange, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACA70, bool, get_WasOtherLizardHit, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDAFE0, bool, get_IsRolling, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F750, void, set_IsRolling, app::LizardEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00FACAE0, bool, get_IsMinAttackCooldownSatisfied, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACAF0, app::LizardSpawnType__Enum, get_SpawnType, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACB00, void, set_SpawnType, app::LizardEntity* this_ptr, app::LizardSpawnType__Enum value)
    IL2CPP_REGISTER_METHOD(0x00FACB10, void, RandomizeCooldown, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACC30, void, OnPoolSpawned, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACD20, void, ResetEntity, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FACD40, void, OnEnable, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAD050, void, OnDisable, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAD230, void, OnDestroy, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAD5A0, void, OnAwake, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAD720, void, UnserializedInitialization, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FADAE0, void, OnFixedUpdate, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FADBC0, void, ResolveDamage, app::LizardEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00FADCE0, void, OnAnyLizardHit, app::LizardEntity* this_ptr, app::LizardEntity* lizard)
    IL2CPP_REGISTER_METHOD(0x00FADDF0, void, TriggerDodgeEvent, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FADF50, void, OnCeilingOrWallCollision, app::LizardEntity* this_ptr, app::Vector3 normal, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(
        0x00FAE0C0,
        app::Vector3,
        ModifyKickbackForce,
        app::LizardEntity* this_ptr,
        app::Vector3 force,
        app::Damage* damage,
        bool apply_death_modification
    )
    IL2CPP_REGISTER_METHOD(0x00FAE250, void, OnAttackEnd, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAE260, void, ctor, app::LizardEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAE4B0, void, cctor, )
} // namespace app::classes::LizardEntity
