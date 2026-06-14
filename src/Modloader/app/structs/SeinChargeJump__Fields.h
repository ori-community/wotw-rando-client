#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJump__Fields_DEFINED)
#include <Modloader/app/structs/BashAttackGame_Modes__Enum.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinChargeJump_AttackResponse__Enum.h>
#include <Modloader/app/structs/SeinChargeJump_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinChargeJump_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SeinChargeJump_AttackResponse__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_BashAttackGame_Modes__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChargeJump__Fields_DEFINED
struct List_1_Moon_ComboSystem_IComboMove_;
struct IAttackable;
struct SeinChargeJump_BalancingData;
struct AnimationCurve;
struct Transform;
struct MoonTimeline;
struct List_1_UnityEngine_Collider_;
struct Collider__Array;
struct SeinChargeJump__Fields {
    struct CharacterState__Fields _;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    float _ProviderCooldown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    SeinChargeJump_State__Enum m_state;

    float m_chargeTimer;
    struct Vector2 m_direction;
    float m_slowDownTimer;
    float m_aimingTimer;
    bool m_canAttack;
    float m_attackDelay;
    struct IAttackable* m_target;
    float m_stateTime;
    struct SeinChargeJump_BalancingData* Balancing;
    float ChargingTime;
    float SlowDownSpeed;
    float AimingTime;
    float DirectionalBoostMultiplier;
    float JumpSpeed;
    struct AnimationCurve* JumpSpeedCurveNormalized;
    struct AnimationCurve* JumpDownSpeedCurveNormalized;
    float DownCurveJumpAngleThreshold;
    float SurfaceDashCurveDuration;
    float MinSpeedAfterPortal;
    float SpeedBlendOutTimeNormalized;
    float SpeedBlendOutDuration;
    float MinOnGroundUpDirection;
    SeinChargeJump_AttackResponse__Enum Attack;

    struct LayerMask AttackableLayer;
    DamageWeight__Enum DamageWeight;

    float ForceMultiplier;
    float ForceDashThroughTime;
    float MinTimeInState;
    float MinTimeBeforeReset;
    struct Vector2 BounceSpeed;
    bool SkipAiming;
    bool StartingFromGroundAllowsSecondJump;
    float SkipAimingChargeTime;
    bool DebugVis;
    float AttackOffTime;
    struct Vector2 OnAimEnterSpeedGround;
    struct Vector2 OnAimEnterSpeedWall;
    float AimingSlowDownDuration;
    struct Vector2 m_slowDownCurrentSpeed;
    struct Transform* ArrowTransform;
    struct MoonTimeline* ShowArrowTimeline;
    struct MoonTimeline* HideArrowTimeline;
    bool m_canChargeJump;
    bool m_startedAimingFromGround;
    bool m_hitWall;
    struct Transform* m_chargeJumpTrail;
    struct List_1_UnityEngine_Collider_* m_ignoredColliders;
    bool m_displayedArrow;
    bool m_wasOnGroundAtStart;
    bool m_hadWallLeftAtStart;
    bool m_hadWallRightAtStart;
    struct Vector2 m_groundBinormalAtStart;
    float CorrectAngleMaxDuration;
    float JumpAnimationDisallowTurnTime;
    float m_genericJumpFlipTransitionRemainingTime;
    bool m_faceLeftAtJumpTime;
    struct Collider__Array* m_targets;
    BashAttackGame_Modes__Enum m_mode;

    float m_angle;
    float m_keyboardSpeed;
    float m_keyboardAngle;
    bool m_keyboardClockwise;
    float MinSpeedToStartApplyingParameter;
    float MinSpeedToFullyApplyParameter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeJump__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinChargeJump_BalancingData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeJump__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
