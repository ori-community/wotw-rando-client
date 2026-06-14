#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDash__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDash__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector2__DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_KuDash__Fields_DEFINED
struct KuDash_PreDashDelegateType;
struct List_1_System_String_;
struct AnimationCurve;
struct MoonTimeline;
struct MoonAnimator;
struct KuDashPuppet;
struct IComboMove__Array;
struct KuDash__Fields {
    struct KuState__Fields _;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct LayerMask SandZoneHittingLayer;
    struct LayerMask WaterZoneHittingLayer;
    bool _IsEnding_k__BackingField;
    struct KuDash_PreDashDelegateType* PreDashDelegate;
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
    float _CoolDown_k__BackingField;
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
    struct MoonAnimator* m_kuAnimator;
    struct Vector2 m_previousPosition;
    struct Nullable_1_UnityEngine_Vector2_ m_dashEntryPoint;
    struct Vector2 m_dashEntryPointNormal;
    struct Vector2 m_adjustedDashDirection;
    struct KuDashPuppet* m_characterStatePuppet;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    struct IComboMove__Array* _ComboMoves_k__BackingField;
    struct Vector3 m_lastRootVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDash__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuDash__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IComboMove__Array.h>
#include <Modloader/app/structs/KuDashPuppet.h>
#include <Modloader/app/structs/KuDash_PreDashDelegateType.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KuDash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDash__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuDash__Fields_FWDDECL)
#include <Modloader/app/structs/KuDash__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDash__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
