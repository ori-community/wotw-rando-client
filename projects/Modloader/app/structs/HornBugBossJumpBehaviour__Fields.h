#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_DEFINED
struct GameObject;
struct MoonTimeline;
struct EventTriggerAnimator;
struct ObjectInsideZoneChecker;
struct AnimationCurve;
struct RootMotionProcessorData;
struct Transform;
struct GroundEntityLocomotion;
struct DamageOwner;
struct HornBugBossJumpBehaviour__Fields {
    struct HornbugBossBaseBehaviour__Fields _;
    struct GameObject* BounceTarget;
    struct MoonTimeline* EnterTimeline;
    struct MoonTimeline* ExitTimeline;
    struct MoonTimeline* TakeOffFwdTimeline;
    struct MoonTimeline* TakeOffBwdTimeline;
    struct MoonTimeline* InAirFwdTimeline;
    struct MoonTimeline* InAirBwdTimeline;
    struct MoonTimeline* LandTimeline;
    struct EventTriggerAnimator* FlipEventTrigger;
    bool PlayEnter;
    bool PlayExit;
    struct ObjectInsideZoneChecker* WalkJumpSafeZone;
    float JumpHeight;
    float JumpDuration;
    float TargetPredictionOffsetScale;
    struct AnimationCurve* JumpYCurveNormalized;
    struct AnimationCurve* JumpXCurveNormalized;
    struct MoonTimeline* m_curTimeline;
    bool m_finished;
    struct Vector3 m_jumpOffset;
    struct RootMotionProcessorData* RootMotion;
    int32_t MaxAmountOfBounces;
    float MinDistance;
    float MaxDistance;
    struct Transform* ImpactEffectSpawnLocation;
    struct GameObject* ImpactEffect;
    float ImpactEffectScaleX;
    struct Vector3 _OriginalTarget_k__BackingField;
    int32_t _AmountOfBounces_k__BackingField;
    struct GroundEntityLocomotion* m_locomotion;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossJumpBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossJumpBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossJumpBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
