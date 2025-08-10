#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/SeinDigging.h>
#include <Modloader/app/structs/SeinDiggingPuppet.h>
#include <Modloader/app/structs/SeinDigging_DiggingEffects.h>
#include <Modloader/app/structs/SeinDigging_State__Enum.h>
#include <Modloader/app/structs/SeinSwimming.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinDigging {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007007E0, bool, get_IsStatePerforming, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007007F0, app::SeinDigging_State__Enum, get_CurrentState, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700800, void, set_CurrentState, app::SeinDigging* this_ptr, app::SeinDigging_State__Enum value)
    IL2CPP_REGISTER_METHOD(0x00700810, bool, get_IsInSand, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007008C0, app::SeinDigging_DiggingEffects*, get_CurrentVFX, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007008D0, float, get_DigAngle, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007008E0, bool, get_CanTurnPlay, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700900, bool, get_WantsToStartDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700910, app::Vector3, get_TrailAnchorPosition, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007009C0, bool, get_CanDealDamage, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007009D0, void, set_CanDealDamage, app::SeinDigging* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x007009E0, app::SeinSwimming*, get_SwimAbility, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700A20, void, SetShouldStartDashing_1, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700A70, void, SetShouldStartDashing_2, app::SeinDigging* this_ptr, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x00700AF0, void, ChangeState, app::SeinDigging* this_ptr, app::SeinDigging_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00700B50, void, OnSetReferenceToSein, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700E20, void, OnEnable, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700EB0, void, OnDisable, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00700F70, void, OnAwake, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00701150, void, OnDestroy, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00701800, void, Start, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00701D30, void, PushAngleToCharacter_1, app::SeinDigging* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x00701DF0, void, PushAngleToCharacter_2, app::SeinDigging* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x00701F00, void, UpdateCharacterState, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007020F0, void, OnExit, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00702250, void, CheckSandZoneChange, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007023C0, void, UpdateCurrentVFX, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00702750, void, OnEnterSand, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00702DE0, void, OnExitSand, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007035D0, void, DestroyTrail, app::SeinDigging* this_ptr, bool lose_reference)
    IL2CPP_REGISTER_METHOD(0x00703740, void, SpawnTrail, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00703C60, void, UpdateSound, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDashingState, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00703EF0, void, UpdateOutOfZoneState, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007041E0, void, HandleUnintentionalSandEntering, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00704370, void, StartOutOfZoneDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00704D00, bool, ShouldLeash, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00704E40, void, UpdateOutOfZoneDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00705970, void, EndOutOfZoneDashing, app::SeinDigging* this_ptr, bool reset_rotation)
    IL2CPP_REGISTER_METHOD(0x00705AF0, void, StopOutOfZoneDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00705B10, void, DestroyOutOfZoneDashingEffect, app::SeinDigging* this_ptr, bool imediate)
    IL2CPP_REGISTER_METHOD(0x00705C90, void, StartDigging, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00706210, bool, ShouldDiggingAnimationPlay, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00706220, float, get_DigLeftStickDeadZone, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00706320, void, UpdateDiggingState, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00707F50, void, LateUpdate, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007082F0, void, UpdateTrailPosition, app::SeinDigging* this_ptr, app::Vector3 position, app::Vector3 wanted_dir, bool force_update)
    IL2CPP_REGISTER_METHOD(0x00708660, void, StartDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00708F30, void, EndDash, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00709060, void, EndDigging, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007096D0, void, StartExitingSand, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070A250, void, UpdateExitingSand, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070A7C0, float, WrapAngle, app::SeinDigging* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x0070A8D0, void, OnRootMotionForExitSand, app::SeinDigging* this_ptr, app::Vector3 root)
    IL2CPP_REGISTER_METHOD(0x0070AA50, void, OnMoonControllerCollision, app::SeinDigging* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x0070ADB0, void, OnDamageReceived, app::SeinDigging* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0070B010, void, Ricochet, app::SeinDigging* this_ptr, app::Vector3 impact_point, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(
        0x0070B4A0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinDigging* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0070B550, void, ModifyGravityPlatformMovementSettings, app::SeinDigging* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x0070B580, app::DigZone*, GetDigZoneAtPoint, app::SeinDigging* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0070B740, bool, IsInWaterZone, app::SeinDigging* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0070B910, app::DigZone*, GetDigZoneIntersectingCircle, app::SeinDigging* this_ptr, app::Vector3 center, float radius)
    IL2CPP_REGISTER_METHOD(0x0070BAE0, float, GetDashDamage, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, GetDashDamageRadius, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BAF0, float, GetDashDamageForce, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BB00, app::LayerMask, GetDashDamageLayerMask, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BB10, bool, HasAbility, app::SeinDigging* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x0070BBD0, void, UpdateCameraLookAhead, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BFE0, void, ActivateCameraLookAhead, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BFF0, void, DeactivateCameraLookAhead, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C0F0, void, OnRestoreCheckpoint, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C310, void, OnDrillZoneReleaseEvent, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C350, void, PlaySound_1, app::SeinDigging* this_ptr, app::SoundProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0070C470, void, PlaySound_2, app::SeinDigging* this_ptr, app::Event_1* wise_event)
    IL2CPP_REGISTER_METHOD(0x0070C590, bool, IsDigDashing, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C5A0, void, OnDrawGizmos, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C5C0, app::SeinDiggingPuppet*, get_Puppet, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C680, void, StartStressTest, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C690, void, StressTestUpdate, app::SeinDigging* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0070C930, void, EndStressTest, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070C9F0, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CA00, void, set_StressTestStatus, app::SeinDigging* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x0070CA10, bool, get_CanExecuteStressTest, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CB20, app::String*, get_StressTestName, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CBA0, void, ctor, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CE40, app::EffectSpawn, _UpdateDiggingState_b__182_0, app::SeinDigging* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x0070C590, bool, _StartDashing_b__185_0, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CE70, bool, _EndDigging_b__187_0, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CF30, bool, _StartExitingSand_b__188_0, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CF40, void, _StartExitingSand_b__188_1, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CF30, bool, _StartExitingSand_b__188_2, app::SeinDigging* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070CF30, bool, _StartExitingSand_b__188_3, app::SeinDigging* this_ptr)
} // namespace app::classes::SeinDigging
