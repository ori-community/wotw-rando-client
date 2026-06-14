#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDashNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDashNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashNew__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector2__DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinDashNew__Fields_DEFINED
struct SeinDashNew_PreDashDelegateType;
struct List_1_System_String_;
struct AnimationCurve;
struct GameObject;
struct MoonTimeline;
struct MoonAnimator;
struct List_1_DigZone_;
struct List_1_WaterZone_;
struct DigZone;
struct Rigidbody;
struct WaterZone;
struct List_1_Moon_ComboSystem_IComboMove_;
struct SeinDashNew__Fields {
    struct CharacterState__Fields _;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct LayerMask SandZoneHittingLayer;
    struct LayerMask WaterZoneHittingLayer;
    bool _IsEnding_k__BackingField;
    struct SeinDashNew_PreDashDelegateType* PreDashDelegate;
    bool OnlyRootMotion;
    bool AllowAirDash;
    bool BackdashEnabled;
    bool ScaleForwardMotionToEnemies;
    float ForwardMotionDistance;
    float ForwardAirMotionDistance;
    struct LayerMask EnemyLayerMask;
    struct List_1_System_String_* RootMotionScalingIgnoreTags;
    float ForwardStickThreshold;
    struct AnimationCurve* MaxSpeedCurve;
    float AllowMeleeAttackNormalizedTime;
    float StuckOnWallDuration;
    float InvincibilityToAttacksTime;
    float PostDashSpeed;
    float DigTolerance;
    struct GameObject* DashEntryTarget;
    struct MoonTimeline* ActivateDiggingTargetSequence;
    struct MoonTimeline* DeactivateDiggingTargetSequence;
    float _CoolDown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    float m_timeToGetUnstuck;
    float m_currentDistanceTraveled;
    float m_predictedTravelDistance;
    float m_rootMotionScale;
    bool m_isDashing;
    bool m_isAirDashing;
    bool m_allowDash;
    bool m_attackButtonPressedDuringDash;
    bool m_forwardDash;
    int32_t m_dashDirection;
    int32_t m_facingDirection;
    struct MoonTimeline* m_currentTimeline;
    struct MoonAnimator* m_seinAnimator;
    struct Vector2 m_previousPosition;
    struct Nullable_1_UnityEngine_Vector2_ m_dashEntryPoint;
    struct Vector2 m_dashEntryPointNormal;
    struct Vector2 m_adjustedDashDirection;
    struct List_1_DigZone_* m_digZonesWithinRadius;
    struct List_1_WaterZone_* m_swimZonesWithinRadius;
    struct DigZone* m_targetDigZone;
    struct Rigidbody* m_targetDigZoneRigibody;
    struct WaterZone* m_targetWaterZone;
    float DigDirectionErrorAngle;
    float DistanceCostMultiplier;
    float AngleCostMultiplier;
    float InputDirectionOffsetY;
    struct List_1_DigZone_* m_nearbyDigZones;
    int32_t m_nearbyDigZonesCachedFrame;
    struct List_1_WaterZone_* m_nearbyWaterZones;
    int32_t m_nearbyWaterZonesCachedFrame;
    bool m_shouldDigCached;
    int32_t m_shouldDigUpdateFramID;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    struct Vector3 m_lastRootVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDashNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDashNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_DigZone_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_WaterZone_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinDashNew_PreDashDelegateType.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_SeinDashNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDashNew__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDashNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDashNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
