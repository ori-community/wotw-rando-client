#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoldenSein__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoldenSein__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoldenSein__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GoldenSein__Fields_DEFINED
struct GameObject;
struct MoonAnimator;
struct AnimationCurve;
struct AbilityType__Enum__Array;
struct Transform__Array;
struct MoonTimeline;
struct ConditionUberState;
struct Transform;
struct SoundPlayer;
struct SeinCharacter;
struct GoldenSein__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Root;
    struct GameObject* AnimationRoot;
    struct MoonAnimator* Animator;
    struct AnimationCurve* DistanceToSpeedCurve;
    struct Vector3 TargetOffset;
    float AttackDistance;
    float ShotCooldownRate;
    float DrainedCooldownTimer;
    int32_t AttacksBeforeCooldown;
    float AttackDamage;
    float MaxDistanceBeforeWarpToTarget;
    struct AbilityType__Enum__Array* DontAttackWhenUsingAbilities;
    struct Vector3 NoTargetShotOffset;
    struct Transform__Array* GraphicTransforms;
    struct GameObject* Projectile;
    struct GameObject* DespawnEffect;
    struct AnimationCurve* UndrainedCurve;
    struct LayerMask LineOfSightLayerMask;
    struct MoonTimeline* PressButtonTimeline;
    struct ConditionUberState* DisableGoldenSeinCondition;
    struct Transform* m_transform;
    float m_shotsTillCooldown;
    struct SoundPlayer* m_twinkleSoundPlayer;
    struct SeinCharacter* m_sein;
    bool m_isDrained;
    float m_hoverTime;
    struct Nullable_1_UnityEngine_Vector3_ m_scenePosition;
    float m_animationTime;
    struct Vector3 m_animationStartPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoldenSein__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoldenSein__Fields_FWDDECL
#include <Modloader/app/structs/AbilityType__Enum__Array.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_GoldenSein__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoldenSein__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoldenSein__Fields_FWDDECL)
#include <Modloader/app/structs/GoldenSein__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoldenSein__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
