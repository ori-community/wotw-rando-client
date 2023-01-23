#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_State__Enum.h>
#include <Modloader/app/structs/TraversalBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TraversalBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_DEFINED
struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array;
struct MoonTimeline;
struct FloatAnimationParameter;
struct SwimmingLocomotion;
struct IActiveAnimation;
struct Transform;
struct PiranhaLocomotionSwimmingBehaviour__Fields {
    struct TraversalBehaviour__Fields _;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array* SpeedSettings;
    struct MoonTimeline* SwimmingTimeline;
    struct MoonTimeline* VerticalFlipTimeline;
    struct MoonTimeline* HorizontalFlipTimeline;
    struct FloatAnimationParameter* BendParam;
    float SmoothAngleDeltaFlipTreshold;
    float HorizontalFlipDotTreshold;
    float TargetDirectionToVelocityRatioForFlip;
    float RatioFlipSpeedTreshold;
    float BendSharpnessRate;
    float BendAngleRange;
    float DelayBetweenFlips;
    bool DebugDrawGizmos;
    struct SwimmingLocomotion* m_locomotion;
    struct IActiveAnimation* m_activeAnimation;
    float m_smoothAngleDelta;
    PiranhaLocomotionSwimmingBehaviour_State__Enum m_state;

    float m_timeInState;
    struct MoonTimeline* m_currentTimeline;
    struct Vector2 m_currentLookDirection;
    struct Vector2 m_targetMoveDirection;
    struct Transform* m_mirrorTransform;
    float m_flipCooldown;
    struct Vector3 _TargetPosition_k__BackingField;
    int32_t LookUpdateRate;
    int32_t m_delayLook;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaLocomotionSwimmingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
