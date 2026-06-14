#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SkeetoAirMoveBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_DEFINED
struct AnimationCurve;
struct MoonTimeline;
struct EventTriggerAnimator;
struct FloatAnimationParameter;
struct SkeetoLocomotion;
struct SkeetoAirMoveBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    float MaxSpeed;
    float ArrivalDistance;
    struct Vector2 ChangeDirectionDistanceRange;
    struct Vector2 ChangeDirectionSpeedRange;
    struct AnimationCurve* ChangeDirectionRate;
    struct MoonTimeline* FlyTimeline;
    struct MoonTimeline* FlipTimeline;
    struct EventTriggerAnimator* FlipTrigger;
    struct FloatAnimationParameter* YDirectionParameter;
    float YDirectionParameterChangeRate;
    struct SkeetoLocomotion* m_locomotion;
    struct Vector3 m_lastSearchedTargetPosition;
    struct Vector2 m_currentDirection;
    SkeetoAirMoveBehaviour_State__Enum m_state;

    float m_timeInState;
    float m_timeInBehaviour;
    struct MoonTimeline* m_currentTimeline;
    float m_yDirectionParameterValue;
    bool m_pauseFlyAnimation;
    float m_previousTraversalSpeed;
    struct Vector3 _TargetPosition_k__BackingField;
    struct Vector2 _CurrentTargetDirection_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoAirMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoAirMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoAirMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
