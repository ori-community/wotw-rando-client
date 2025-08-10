#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IBrainController_1_PetrifiedOwlBossEntity_AnimationDirections_.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/List_1_PetrifiedOwlBossBaseBehaviour_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_OnDamageReceivedDelegate.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_Phases__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossGroundPiece.h>
#include <Modloader/app/structs/PetrifiedOwlBossLavaController.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlBossEntity {
    IL2CPP_REGISTER_METHOD(0x004A21A0, app::Vector2, get_ArenaBoundsX, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A24C0, app::Vector2, get_ArenaBoundLeft, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2730, app::Vector2, get_ArenaBoundRight, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A29A0, float, get_LookAtHorizontalRatio, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A29F0, void, set_LookAtHorizontalRatio, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004A2A40, float, get_LookAtVerticalRatio, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2A90, void, set_LookAtVerticalRatio, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2AE0, app::PetrifiedOwlBossLavaController*, get_LavaController, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004A2BF0,
        void,
        SetOverrideToDamageReceivers,
        app::PetrifiedOwlBossEntity* this_ptr,
        bool add,
        app::DamageReceiver_OverrideInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x004A2CB0, app::PetrifiedOwlBossEntity_Phases__Enum, get_CurrentPhase, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2CE0, void, set_CurrentPhase, app::PetrifiedOwlBossEntity* this_ptr, app::PetrifiedOwlBossEntity_Phases__Enum value)
    IL2CPP_REGISTER_METHOD(0x004A2D10, float, get_HealthToTransitionToEscape1, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2D50, float, get_HealthToTransitionToFight3, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2D90, float, get_FlyToCamBlendParameter, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A2DE0, void, set_FlyToCamBlendParameter, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004A2E30,
        void,
        add_OnDamageReceivedCallback,
        app::PetrifiedOwlBossEntity* this_ptr,
        app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x004A2F20,
        void,
        remove_OnDamageReceivedCallback,
        app::PetrifiedOwlBossEntity* this_ptr,
        app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x004A3010, int32_t, GetHitEffectPrewarmAmount, app::PetrifiedOwlBossEntity* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x004A3020, float, get_HealthForBreakable1, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3060, float, get_HealthForBreakable2, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A30A0, app::List_1_PetrifiedOwlBossBaseBehaviour_*, get_ExecutingBehaviours, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A30B0, bool, get_IsRestoringState, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A30C0, float, get_TimeSinceLastHitReact, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A30D0, float, get_DamageRequiredForStagger, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3150, bool, CanHitReact, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3190, void, FillDamageRequiredForStagger, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A31B0, app::Vector3, get_ProjectedSpitShootPoint, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3320, float, GetDistanceToLeftBound, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A33F0, float, GetDistanceToRightBound, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A34C0, app::PetrifiedOwlBossLocomotion*, get_PowlLocomotion, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3580, app::Transform*, get_TargetCharacterTransform, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3630, bool, get_ShouldIncrementState, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3640, void, set_ShouldIncrementState, app::PetrifiedOwlBossEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, AreLegsInFront, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3930, bool, IsTargetInHeadbuttPosition, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3960, bool, IsTargetInStiltsWideZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3990, bool, CanDoBlockingStomp, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A39D0, int32_t, get_SideMovesSinceLastEnclosed, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A39E0, float, get_DistanceToTargetX, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3AC0, bool, get_IsInSpitRange, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3AF0, float, get_TargetFreeTimer, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B00, float, get_TargetEnclosedTimer, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B10, float, get_MaxTargetFreeTime, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B20, float, get_MaxTargetEnclosedTime, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B30, bool, IsTargetInStiltsNarrowZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B60, bool, IsFight1, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B90, bool, IsFight2, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3BC0, bool, IsTargetInArena2MainZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3BF0, bool, IsFight3, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3C20, bool, IsTargetInGrassZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3C40, bool, IsTargetInArena2EndEscapeZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3630, bool, ShouldPlayCinematicBehaviour, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3C70, bool, IsInAir, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3D60, bool, IsTargetInClawNarrowZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3D60, bool, IsTargetInClawWideZone, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3D90, float, GetCurrentLavaHeight, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3ED0, float, get_DistanceToLimitInTargetDirection, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A4070, float, get_EntityPositionX, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A4140, void, set_EntityPositionX, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004A43D0, float, get_EntityPositionY, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A44A0, void, set_EntityPositionY, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004A4730, app::Vector3, get_EntityPositionXY, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A4830, void, set_EntityPositionXY, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x004A4910, float, get_EntityPositionZ, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A49E0, void, set_EntityPositionZ, app::PetrifiedOwlBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004A4C70, app::Vector3, get_TargetPosition, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A4D90, float, get_DirectionToTarget, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A4E80, float, ClampToLimitsX, app::PetrifiedOwlBossEntity* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004A4F50, app::Vector3, ClampToLimits, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x004A4FA0, app::Vector3, get_ArenaCenterPosition, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A51A0, float, get_GroundHeight, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A51C0, float, get_MaxHeight, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5310, app::Vector3, GetClosestGroundPosition, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x004A56D0, void, SetGameFinished, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5700, void, ResetAllBreakableStates, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5840, void, Awake, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5A80, void, Start, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5AA0, void, OnCacheSerializedComponents, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5B50, void, OnAwake, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5DE0, void, OnEnable, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A5FE0, void, OnDisable, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A60B0, void, ResetEntity, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDied, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A63E0, void, OnPostRestoreCheckpoint, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A6430, bool, ShouldShowHealthBar, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A64C0, void, OnFixedUpdate, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A6710, void, UpdateLaserDirection, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A68D0, void, OnProcessRootMotion, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3* velocity)
    IL2CPP_REGISTER_METHOD(0x004A6A30, void, UpdateHitReactionLogic, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A6C00, void, UpdateLavaLogic, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A6EA0, void, UpdateTimers, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A6FA0, void, UpdateLegsDepthLogic, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004A70C0,
        void,
        OnPetrifiedOwlBaseBehaviourEntered,
        app::PetrifiedOwlBossEntity* this_ptr,
        app::PetrifiedOwlBossBaseBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(
        0x004A7160,
        void,
        OnPetrifiedOwlBaseBehaviourExited,
        app::PetrifiedOwlBossEntity* this_ptr,
        app::PetrifiedOwlBossBaseBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x004A7200, void, OnBlockingStompStarted, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7200, void, OnWallCrushStarted, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7220, void, OnEscape1Ended, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7230, void, OnDeathBehaviourEntered, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7240, void, OnDeathBehaviourEnded, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7360, void, ResolveDamage, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x004A7500, void, OnDamageReceived, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x004A7A40, void, HandleDamageForHitReaction, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x004A7AD0, void, OnHitReacted, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A7AE0, void, RequestDestructionAtPosition, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x004A7F30, app::PetrifiedOwlBossGroundPiece*, HasRemainingDestructibles, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A80F0, void, CheckShouldTransitionToNextPhase, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A82E0, void, TransitionToPhase, app::PetrifiedOwlBossEntity* this_ptr, app::PetrifiedOwlBossEntity_Phases__Enum new_phase)
    IL2CPP_REGISTER_METHOD(0x004A83E0, void, ApplyCombatPhaseStartConditions, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A85E0, void, ApplyCinematicBehaviourIfNeeded, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A86F0, void, UpdateLookAt, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A8E00, app::Vector2, GetMaxLookAt, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A9010, float, AngleAroundAxis, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 v, app::Vector3 forward, app::Vector3 axis)
    IL2CPP_REGISTER_METHOD(0x004A93A0, void, UpdateColliders, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TweakCameraTargets, app::PetrifiedOwlBossEntity* this_ptr, app::List_1_Moon_CameraTargetSettings_* targets)
    IL2CPP_REGISTER_METHOD(0x004A9560, void, PlayStompAnticipationFeedback, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x004A9680, void, PlayDiveAnticipationFeedback, app::PetrifiedOwlBossEntity* this_ptr, app::Vector3 pos, app::Vector3 rot)
    IL2CPP_REGISTER_METHOD(0x004A97C0, void, PlayOffLimitsAnticipationFeedback, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A9940, void, CacheGroundPiecesIfNeeded, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A99F0, void, CacheGroundPieces, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A9C10, void, CacheInvisibleWalls, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A9E40, void, SetCollidersToIgnore, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004AA1C0, void, TriggerShriek, app::PetrifiedOwlBossEntity* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x004AA320, void, UpdateShriekEffects, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004AA510,
        app::IBrainController_1_PetrifiedOwlBossEntity_AnimationDirections_*,
        GetExecutingBrain,
        app::PetrifiedOwlBossEntity* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004AA680, void, Apply, app::PetrifiedOwlBossEntity* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x004AA6E0, app::IUberState__Array*, get_AffectingUberStates, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004AA770, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::PetrifiedOwlBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004AA930, void, ctor, app::PetrifiedOwlBossEntity* this_ptr)
} // namespace app::classes::PetrifiedOwlBossEntity
