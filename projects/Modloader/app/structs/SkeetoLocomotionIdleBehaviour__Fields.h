#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct FloatAnimationParameter;
struct SkeetoLocomotion;
struct PlatformMovement;
struct SkeetoLocomotionIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* IdleMoonTimeline;
    struct MoonTimeline* FlipTimeline;
    struct EventTriggerAnimator* FlipTrigger;
    struct FloatAnimationParameter* YDirectionParameter;
    float YDirectionParameterChangeRate;
    float MaxSpeed;
    float Acceleration;
    float AngularVelocity;
    struct SkeetoLocomotion* m_locomotion;
    struct PlatformMovement* m_platformMovement;
    SkeetoLocomotionIdleBehaviour_State__Enum m_state;

    float m_timeInState;
    struct MoonTimeline* m_currentTimeline;
    float m_yDirectionParameterValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoLocomotionIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
