#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones.h>
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyCameraTargetsDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLegsIKDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLookAngleDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_OnDamageReceivedDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_Phases__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion.h>
#include <Modloader/app/structs/List_1_KwolokBossBaseBehaviour_.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokBossEntity {
    IL2CPP_REGISTER_METHOD(0x012D70E0, app::Collider__Array*, get_AllColliders, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D70F0, bool, get_CollidersEnabled, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7180, void, set_CollidersEnabled, app::KwolokBossEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012D72E0, app::DamageDealer__Array*, get_AllDamageDealers, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D72F0, float, get_StinkSpiritLookHorizontalRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7330, void, set_StinkSpiritLookHorizontalRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7380, float, get_StinkSpiritLookVerticalRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D73C0, void, set_StinkSpiritLookVerticalRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7410, float, get_KwolokLookHorizontalRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7450, void, set_KwolokLookHorizontalRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D74A0, float, get_KwolokLookVerticalRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D74E0, void, set_KwolokLookVerticalRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7530, void, add_ModifyLegsIK, app::KwolokBossEntity* this_ptr, app::KwolokBossEntity_ModifyDesiredLegsIKDelegate* value)
    IL2CPP_REGISTER_METHOD(0x012D7620, void, remove_ModifyLegsIK, app::KwolokBossEntity* this_ptr, app::KwolokBossEntity_ModifyDesiredLegsIKDelegate* value)
    IL2CPP_REGISTER_METHOD(
        0x012D7710,
        void,
        add_ModifyLookAngleChangeSpeed,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012D7800,
        void,
        remove_ModifyLookAngleChangeSpeed,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012D78F0,
        void,
        add_ModifyDesiredLookAngle,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_ModifyDesiredLookAngleDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012D79E0,
        void,
        remove_ModifyDesiredLookAngle,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_ModifyDesiredLookAngleDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x012D7AD0, app::KwolokBossEntity_Phases__Enum, get_CurrentPhase, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7B00, void, set_CurrentPhase, app::KwolokBossEntity* this_ptr, app::KwolokBossEntity_Phases__Enum value)
    IL2CPP_REGISTER_METHOD(0x012D7CF0, float, get_HealthToTransitionToCleanWater, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7D30, float, get_HealthToTransitionToCorruptedWater, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7D70, float, get_LookAngle, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7DB0, void, set_LookAngle, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7E00, float, get_BodyHeightRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7E40, void, set_BodyHeightRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7E90, float, get_FeetHeightRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7ED0, void, set_FeetHeightRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7F20, float, get_TongueAttackHeightRatio, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D7F60, void, set_TongueAttackHeightRatio, app::KwolokBossEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012D7FF0, app::KwolokBossBehaviourZones*, get_BehaviourZones, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012D8080,
        void,
        add_OnDamageReceivedCallback,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_OnDamageReceivedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012D8170,
        void,
        remove_OnDamageReceivedCallback,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_OnDamageReceivedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x012D8260, void, add_ModifyCameraTargets, app::KwolokBossEntity* this_ptr, app::KwolokBossEntity_ModifyCameraTargetsDelegate* value)
    IL2CPP_REGISTER_METHOD(
        0x012D8350,
        void,
        remove_ModifyCameraTargets,
        app::KwolokBossEntity* this_ptr,
        app::KwolokBossEntity_ModifyCameraTargetsDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x012D8440, app::List_1_KwolokBossBaseBehaviour_*, get_ExecutingBehaviours, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8450, app::SeinCharacter*, get_Ori, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D84E0, app::KwolokBossLocomotion*, get_KwolokLocomotion, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D85A0, float, get_TimeSinceLastHitReact, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D85B0, float, get_DamageRequiredForStagger, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8630, bool, CanHitReact, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8670, bool, ShouldShowHealthBar, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D86A0, bool, get_IsCombatPhase, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8710, bool, get_IsEscapePhase, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8740, void, OnValidate, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D88A0, void, OnEnable, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8AA0, void, OnDisable, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8B70, void, OnCacheSerializedComponents, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8C40, void, OnAwake, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8F20, void, Start, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D8FF0, void, OnPostRestoreCheckpoint, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9030, void, ResetEntity, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDied, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9160, bool, IsBehaviourTreePaused, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9280, void, OnFixedUpdate, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateTimers, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9630, void, OnKwolokBaseBehaviourEntered, app::KwolokBossEntity* this_ptr, app::KwolokBossBaseBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x012D96D0, void, OnKwolokBaseBehaviourExited, app::KwolokBossEntity* this_ptr, app::KwolokBossBaseBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x012D97D0, void, ResetAttacksCooldown, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D97E0, bool, get_AreAttacksOnCooldown, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D97F0, app::Transform*, get_MouthShootBonePosition, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9800, app::Transform*, get_OriTransform, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9900, void, UpdateSkinnedMesh, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D9C20, void, UpdateBodyOrientation, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DA0E0, void, UpdateStinkSpiritHeadLookAts, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DAD50, float, AngleAroundAxis, app::KwolokBossEntity* this_ptr, app::Vector3 v, app::Vector3 forward, app::Vector3 axis)
    IL2CPP_REGISTER_METHOD(0x012DB0E0, app::Vector2, GetMaxLookAtWeights, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DB2F0, bool, ShouldPlayShakingTentacles, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DB300, void, UpdateShakingTentacles, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DB380, void, UpdateHitReactionLogic, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DB550, void, UpdateLegsIK, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DB630, void, UpdateBodyAudioLogic, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DBB70, void, BodyEnterWater, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DBC60, void, BodyExitWater, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DBD50, void, TweakCameraTargets, app::KwolokBossEntity* this_ptr, app::List_1_Moon_CameraTargetSettings_* targets)
    IL2CPP_REGISTER_METHOD(
        0x012DBD80,
        void,
        MoveTowards,
        app::KwolokBossEntity* this_ptr,
        app::Transform* target,
        app::Vector3 ideal_target,
        app::AnimationCurve* speed_curve
    )
    IL2CPP_REGISTER_METHOD(0x012DC060, void, OnDamageReceived, app::KwolokBossEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x012DC6A0, void, HandleDamageForHitReaction, app::KwolokBossEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x012DC730, void, FillDamageRequiredForStagger, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DC750, void, OnHitReacted, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DC760, void, OnIntroBehaviourEnded, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DC770, void, OnEscapeBehaviourEnded, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DC780, void, CheckShouldTransitionToNextPhase, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DC830, void, TransitionToPhase, app::KwolokBossEntity* this_ptr, app::KwolokBossEntity_Phases__Enum new_phase)
    IL2CPP_REGISTER_METHOD(0x012DC920, void, SetColliderLayers, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DCA20, void, ApplyCombatPhaseStartConditions, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DCC70, void, ApplyCinematicBehaviourIfNeeded, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DCD80, void, KillPiranhasIfNeeded, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DCDD0, void, KillPiranhas, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DCFB0, void, Apply, app::KwolokBossEntity* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x012DD1B0, bool, get_DoesRaceAllowCinematicApply, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DD270, app::IUberState__Array*, get_AffectingUberStates, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DD300, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGUI, app::KwolokBossEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012DD4C0, void, ctor, app::KwolokBossEntity* this_ptr)
} // namespace app::classes::KwolokBossEntity
