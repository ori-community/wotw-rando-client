#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EnemyEntity_SpawnPopFixState__Enum.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::EnemyEntity {
    IL2CPP_REGISTER_METHOD(0x0120D000, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0120D0A0, void, ResetLogSettingStatics, )
    IL2CPP_REGISTER_METHOD(0x00696560, app::EnemyEntity_SpawnPopFixState__Enum, get_PopFixState, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696570, void, set_PopFixState, app::EnemyEntity* this_ptr, app::EnemyEntity_SpawnPopFixState__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UsesHealthbar, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldApplySpawnPopFix, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0120D140,
        void,
        GetRepelForceParams_EditorOnly,
        app::EnemyEntity* this_ptr,
        bool* should_apply_repel_force,
        float* repel_range,
        float* max_repel_force,
        float* same_position_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0120D170,
        void,
        SetRepelForceParams_EditorOnly,
        app::EnemyEntity* this_ptr,
        bool should_apply_repel_force,
        float repel_range,
        float max_repel_force,
        float same_position_error
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFlyingEnemy, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UseDeathLoopTimeLimit, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120D1A0, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A4A50, app::DamageOwner*, get_DamageOwner, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanAttackTokenBeStolen, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoResetSpotOriBool, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120D1B0, app::Type*, get_EnemyType, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120D270, int32_t, get_IndexInGroup, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120D450, bool, get_IsPlayerInputLocked, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0120D500,
        bool,
        TryGetSuspendWhenOutOfFrustrumWithCondition,
        app::EnemyEntity* this_ptr,
        app::SuspendWhenOutOfFrustrumWithCondition** frustrum_suspend_component
    )
    IL2CPP_REGISTER_METHOD(0x0120D600, void, OnUpdate, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120D8B0, void, OnCacheSerializedComponents, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120DAC0, void, DropAttackToken, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120DC90, void, OnDied, app::EnemyEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x0120DFB0, void, SpawnOrbs, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120E180, void, OnAttackTokenStolen, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120E1A0, void, ResetEntity, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120E610, void, OnDestroy, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120EC00, void, Start, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120ECD0, void, OnAwake, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120F3B0, void, OnEnable, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120F420, void, OnDisable, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120F520, void, InstantKill, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120F880, void, OnDamageResultReceived, app::EnemyEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x012104A0, void, MoonCleanup, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012104D0, void, ResetDeathLoopTimeLimitState, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012104E0, void, UpdateDeathLoopTimeLimit, app::EnemyEntity* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x012105C0, void, ResetMinHealthLimitState, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012105D0, void, UpdateMinHealthLimit, app::EnemyEntity* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x012106F0, bool, TryGetPlatformMovement, app::EnemyEntity* this_ptr, app::CharacterPlatformMovement** platform_movement)
    IL2CPP_REGISTER_METHOD(0x01210760, void, ApplyRepellForce, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01210C80,
        app::Vector3,
        ModifyKickbackForce,
        app::EnemyEntity* this_ptr,
        app::Vector3 force,
        app::Damage* damage,
        bool apply_death_modification
    )
    IL2CPP_REGISTER_METHOD(0x01211350, void, ctor, app::EnemyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Moon::EnemyEntity
