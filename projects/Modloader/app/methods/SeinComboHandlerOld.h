#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMove.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinComboHandlerOld.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SeinComboHandlerOld {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009628E0, bool, get_IsPerformingAComboMove, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_SeinPlatformMovement, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, get_SpriteMirrorLock, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640B0, void, set_SpriteMirrorLock, app::SeinComboHandlerOld* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A64170, app::Transform*, get_WeaponJoint, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64220, app::Transform*, get_RootJoint, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Animator*, get_Animator, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64230, app::MeleeWeapon*, get_CurrentWeapon, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64240, app::ComboMove*, get_CurrentComboMove, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64250, app::MeleeComboMoveSettings*, get_CurrentMeleeComboSettings, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPrint, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x00A643B0, void, OnSetReferenceToSein, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A646C0, void, OnDestroy, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64D80, void, Start, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A65490, void, Update, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A655A0, void, ShakeCamera, app::SeinComboHandlerOld* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x00A65610, void, EquipWeapon, app::SeinComboHandlerOld* this_ptr, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x00A65710, void, UnequipWeapon, app::SeinComboHandlerOld* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x00A65790, void, OnExit, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009628E0, bool, get_IsStatePerforming, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A657D0, void, UpdateCharacterState, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A657F0, void, UpdateRootMotion, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A65F50, void, UpdateComboMove, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A66610, void, UpdateCooldown, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, SetInputBuffer, app::SeinComboHandlerOld* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A66740, app::ComboInput*, GetNextInput, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A66760, app::ComboMove*, FindComboMoveForInput, app::SeinComboHandlerOld* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A66780, app::ComboMove*, FindInitialComboMoveForInput, app::SeinComboHandlerOld* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A66980, app::ComboMove*, FindChainedComboMoveForInput, app::SeinComboHandlerOld* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A66DE0, void, PerformComboMove, app::SeinComboHandlerOld* this_ptr, app::ComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A670C0, void, BeginWeaponCombo, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A672A0, void, EndWeaponCombo, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A674E0, void, BeginCombo, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A67740, void, EndCombo, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A67990,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinComboHandlerOld* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00A679B0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinComboHandlerOld* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A679D0, void, OnAnimationEvent, app::SeinComboHandlerOld* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A679F0, void, OnOriTakeDamage, app::SeinComboHandlerOld* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00A67B30, void, OnDamageResultReceived, app::SeinComboHandlerOld* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00A68260, float, GetCooldown, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A682C0, void, UpdateTargetting, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A68400, void, UpdateTargetHighlight, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A68690, void, UpdateClosestAttackables, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A68A80, void, RegisterComboMoveUse, app::SeinComboHandlerOld* this_ptr, app::ComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00A68B90, void, ResetAllUsedMoves, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A68D20, void, CreateMoveInstances, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A69210, void, OnHoldablePickUp, app::SeinComboHandlerOld* this_ptr, app::IHoldable* holdable)
    IL2CPP_REGISTER_METHOD(0x00A694C0, void, SetTorchWeaponToTorchMoves, app::SeinComboHandlerOld* this_ptr, app::MeleeWeaponTorch* torch)
    IL2CPP_REGISTER_METHOD(0x00A695D0, void, ctor, app::SeinComboHandlerOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A69AD0, bool, _OnDamageResultReceived_b__81_0, app::SeinComboHandlerOld* this_ptr)
} // namespace app::classes::SeinComboHandlerOld
