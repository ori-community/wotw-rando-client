#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MeleeComboMoveTorch.h>
#include <Modloader/app/structs/MeleeComboMoveTorch_State__Enum.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveTorch {
    IL2CPP_REGISTER_METHOD(0x009C0FE0, bool, get_MoveHasFinished, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C0FF0, app::String*, get_AnimationSpeedMultiplierParameterName, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1070, app::CharacterPlatformMovement*, get_PlatformMovement, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C10B0, float, get_EffectiveDamage, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C10E0, app::DamageType__Enum, get_EffectiveDamageType, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C11E0, bool, CanExecute, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1250, void, Initialize, app::MeleeComboMoveTorch* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x009C15C0, void, OnAnimationFinished, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C15D0, bool, KeepAnimationPlaying, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C15E0, app::AbilityType__Enum, get_ComboAbilityType, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C15F0, void, EnterMove, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1B00, void, ChangeState, app::MeleeComboMoveTorch* this_ptr, app::MeleeComboMoveTorch_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x009C1C00, void, EnterInactiveState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1C20, void, EnterPrepareState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1C80, void, EnterNormalState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C21D0, void, EnterThrowingState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2250, void, UpdateMove, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInactiveState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2370, void, UpdateNormalState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2770, void, InterruptMove, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2790, void, UpdateThrowingState, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2AB0, void, ExitMove, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C2CC0, void, ApplySettings, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009C2F50,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveTorch* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x009C2F80,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveTorch* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x009C2FD0, void, OnMoveWindowOpen, app::MeleeComboMoveTorch* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x009C3000, void, OnMoveWindowClosed, app::MeleeComboMoveTorch* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x009C3030, void, SpawnEffects, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009C3360,
        void,
        OnCollision,
        app::MeleeComboMoveTorch* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x009C33B0,
        void,
        OnGroundCollision,
        app::MeleeComboMoveTorch* this_ptr,
        app::Vector2 hit_point,
        app::Vector2 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type,
        bool force_effect,
        bool charged
    )
    IL2CPP_REGISTER_METHOD(0x009C3820, app::Vector2, ComputeEffectiveKickback, app::MeleeComboMoveTorch* this_ptr, app::Vector3 enemy_position)
    IL2CPP_REGISTER_METHOD(
        0x009C3A40,
        void,
        TryToDealDamage,
        app::MeleeComboMoveTorch* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x009C43A0, void, OnDamageTicked, app::MeleeComboMoveTorch* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x009C4520, app::EffectSpawn, DamageEffectProvider, app::MeleeComboMoveTorch* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x009C4630, void, BeginAttackSegment, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C48D0, void, EndAttackSegment, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C4A00, int32_t, GetPrewarmAmount, app::MeleeComboMoveTorch* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x009C4A10, void, ctor, app::MeleeComboMoveTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C15C0, void, _UpdateThrowingState_b__60_0, app::MeleeComboMoveTorch* this_ptr)
} // namespace app::classes::MeleeComboMoveTorch
