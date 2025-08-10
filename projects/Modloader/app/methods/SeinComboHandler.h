#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/IComboMoveProvider.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinComboHandler {
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::SeinComboHandler_StubbedComboMove*, get_MovementAbility, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::SeinComboHandler_StubbedComboMove*, get_AttackAbility, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_ShouldModifyGravity, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6A0, void, set_ShouldModifyGravity, app::SeinComboHandler* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A5B6B0, bool, get_DamageDealtDuringLastMove, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6C0, void, set_DamageDealtDuringLastMove, app::SeinComboHandler* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A5B6D0, bool, get_IsPerformingAComboMove, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6D0, bool, get_IsStatePerforming, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6E0, bool, IsPerformingAComboMoveSkipJump, app::SeinComboHandler* this_ptr, app::CharacterState* jump)
    IL2CPP_REGISTER_METHOD(0x00A5B7D0, bool, IsPerformingAnAttackAbility, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B870, bool, IsPreformingUninterruptableAttack, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_SeinPlatformMovement, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B980, app::Transform*, get_WeaponJoint, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsPerformingWeaponCombo, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F210, app::Transform*, get_RootJoint, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720150, app::Animator*, get_Animator, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::MeleeWeapon*, get_CurrentWeapon, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA50, app::IComboMove*, get_CurrentComboMove, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756A30, app::IComboMove*, get_UpcomingComboMove, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPrint, app::SeinComboHandler* this_ptr, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x00A5BA60, void, OnSetReferenceToSein, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BF10, void, OnDestroy, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5CBF0, void, Start, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5D830, void, LateUpdate, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5D940, void, ShakeCamera, app::SeinComboHandler* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x00A5D9B0, void, EquipWeapon, app::SeinComboHandler* this_ptr, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x00A5DB90, void, UnequipWeapon, app::SeinComboHandler* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x00A5DCC0, void, OnExit, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5DD60, void, UpdateCharacterState, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5DD80, void, UpdateRootMotion, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5E6B0, bool, CanBeInterruptedBy, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A5E770, void, UpdateComboMove, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5F0B0, void, ResetMovesGrounded, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5F250, void, UpdateCooldown, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, SetInputBuffer, app::SeinComboHandler* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::ComboInput*, GetNextInput, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5F4E0, app::IComboMove*, FindComboMoveForInput, app::SeinComboHandler* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A5F5D0, app::IComboMove*, FindInitialComboMoveForInput, app::SeinComboHandler* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A5F7A0, bool, IsMoveOnCooldown, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A5F8B0, void, UpdateCooldownRules, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5FE30, void, HitWater, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5FE40, void, OnLand, app::SeinComboHandler* this_ptr, app::Vector3 normal, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x00A5FF50, app::IComboMove*, FindChainedComboMoveForInput, app::SeinComboHandler* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A60000, bool, IsMoveConnectedToMove, app::SeinComboHandler* this_ptr, app::IComboMove* last_move, app::IComboMove* new_move)
    IL2CPP_REGISTER_METHOD(0x00A601A0, void, PerformComboMove, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A60580, void, ExitComboMove, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A606C0, void, BeginWeaponCombo, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A608C0, void, EndWeaponCombo, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A60AC0, void, BeginCombo, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A60CF0, void, EndCombo, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A60ED0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinComboHandler* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00A60FD0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinComboHandler* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A610D0, void, OnAnimationEvent, app::SeinComboHandler* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x00A61170, void, OnOriTakeDamage, app::SeinComboHandler* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00A612A0, void, OnDamageResultReceived, app::SeinComboHandler* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00A61AF0, float, GetCooldown, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A61C00, void, UpdateTargetting, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A61D40, void, UpdateTargetHighlight, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A61FD0, void, UpdateClosestAttackables, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A62450, void, RegisterComboMoveUse, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A62750, void, ResetAllUsedMoves, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A62860, void, RegisterComboMove, app::SeinComboHandler* this_ptr, app::IComboMove* move, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00A62A80, void, RegisterComboMovesFromProvider, app::SeinComboHandler* this_ptr, app::IComboMoveProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00A62B70, void, RegisterComboMoveProvider_1, app::SeinComboHandler* this_ptr, app::IComboMoveProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00A62C80, void, SetSuspensionMask, app::SeinComboHandler* this_ptr, app::GameObject* game_object, app::SuspendableMask__Enum mask)
    IL2CPP_REGISTER_METHOD(
        0x00A62D80,
        void,
        RegisterComboMoveProvider_2,
        app::SeinComboHandler* this_ptr,
        app::IComboMoveProvider* provider,
        app::Type* before_type
    )
    IL2CPP_REGISTER_METHOD(0x00A63020, void, DeregisterComboMoveProvider, app::SeinComboHandler* this_ptr, app::IComboMoveProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00A63120, void, DeregisterComboMove, app::SeinComboHandler* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A632A0, void, DeregisterComboMovesFromProvider, app::SeinComboHandler* this_ptr, app::IComboMoveProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00A63390, void, OnHoldablePickUp, app::SeinComboHandler* this_ptr, app::IHoldable* holdable)
    IL2CPP_REGISTER_METHOD(0x00A634E0, void, ctor, app::SeinComboHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64030, bool, _OnDamageResultReceived_b__114_0, app::SeinComboHandler* this_ptr)
} // namespace app::classes::SeinComboHandler
