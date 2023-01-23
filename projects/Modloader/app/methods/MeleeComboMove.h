#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAttackable.h>

namespace app::classes::MeleeComboMove {
    IL2CPP_REGISTER_METHOD(0x01386280, void, ResetHitTracking, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01386360, app::Entity*, GetEntityForCollider, (app::MeleeComboMove * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x013863F0, bool, HaveBeenHit, (app::MeleeComboMove * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x013865B0, void, TrackHit, (app::MeleeComboMove * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x01386720, app::Vector2, get_EffectiveRootMotionMultiplier, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::MeleeWeapon*, get_Weapon, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::MaterialBasedSeinEffectsMap*, get_HitVFX, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01386740, bool, get_DealtDamage, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013867D0, app::Vector3, get_GetTargetPosition, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01386AF0, bool, get_HasStingerShardEquipped, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C5D90, bool, get_WasAttackButtonReleasedDuringThisMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012025B0, float, get_MoveTime, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01386BB0, void, OnGroundCollision, (app::MeleeComboMove * this_ptr, app::Vector2 hit_point, app::Vector2 hit_normal, app::Vector3 surface_normal, app::SurfaceMaterialType__Enum surface_type, bool force_effect, bool charged))
    IL2CPP_REGISTER_METHOD(0x01387120, app::GameObject*, GetHitEffectPrefab, (app::MeleeComboMove * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_MoveHasFinished, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_MoveCooldown, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437A70, float, get_MoveCooldownTimer, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D33510, void, set_MoveCooldownTimer, (app::MeleeComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_ProviderCooldown, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437A80, float, get_ProviderCooldownTimer, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01387250, void, set_ProviderCooldownTimer, (app::MeleeComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ComboMoveType__Enum, get_ComboMoveType, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01387260, bool, get_WasGroundedSinceLastExecution, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01387270, void, set_WasGroundedSinceLastExecution, (app::MeleeComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01387280, app::IComboMove*, GetComboMove, (app::MeleeComboMove * this_ptr, app::ComboInput* input))
    IL2CPP_REGISTER_METHOD(0x013873F0, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01387420, void, EnterMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01387740, void, InitializeTimeline, (app::MeleeComboMove * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x01387BC0, void, OnMoveWindowOpen, (app::MeleeComboMove * this_ptr, app::MoveEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x01387CD0, void, OnMoveWindowClosed, (app::MeleeComboMove * this_ptr, app::MoveEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x01387DE0, void, UpdateGroundAngle, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013882B0, bool, GroundRayCast_1, (app::MeleeComboMove * this_ptr, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x01388460, bool, GroundRayCast_2, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388600, void, UpdateMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388D40, void, ExitMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388ED0, bool, get_IsAttackButtonUsed, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388F00, bool, get_IsAttackButtonDown, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388F30, bool, get_OnAttackButtonPressed, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388F60, bool, get_OnAttackButtonReleased, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsUninterruptable, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388F90, bool, CanExecute, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, CanInputBeQueued, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01388FC0, bool, CanBeInterruptedBy, (app::MeleeComboMove * this_ptr, app::IComboMove* move))
    IL2CPP_REGISTER_METHOD(0x013891A0, void, InterruptMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013893A0, void, Initialize, (app::MeleeComboMove * this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Deinitialize, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01389660, void, OnAnimationEvent, (app::MeleeComboMove * this_ptr, app::SeinController3D_EventId__Enum event_id))
    IL2CPP_REGISTER_METHOD(0x01389680, void, PlayAnimation, (app::MeleeComboMove * this_ptr, app::MoonAnimation* animation, float speed_multiplier, app::Action* on_stop_playing, app::Func_1_Boolean_* condition, int32_t animation_priority))
    IL2CPP_REGISTER_METHOD(0x01389930, void, OnAnimationStarted, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475C558, MeleeComboMove_OnAnimationStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01389AB0, bool, IsValidGroundCollisionNormal, (app::MeleeComboMove * this_ptr, app::Vector3 surface_normal))
    IL2CPP_REGISTER_METHOD(0x01389CB0, bool, IsValidTargetPosition, (app::MeleeComboMove * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x01389F30, app::IAttackable*, GetNearestTarget, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138A3C0, app::IAttackable*, GetNearestPotentialTarget, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138A920, float, ComputeAngleTo, (app::MeleeComboMove * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroyMove, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138AB40, void, ResetAirLimits, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FDA0, MeleeComboMove_ResetAirLimits__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0138ABA0, void, OnDestroy, (app::MeleeComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138ADA0, void, ctor, (app::MeleeComboMove * this_ptr))
} // namespace app::classes::MeleeComboMove
