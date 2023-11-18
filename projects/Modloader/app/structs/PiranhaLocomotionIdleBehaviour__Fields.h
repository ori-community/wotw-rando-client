#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum.h>
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimationParameter;
struct SwimmingLocomotion;
struct PiranhaLocomotionIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* IdleTimeline;
    struct FloatAnimationParameter* BendParam;
    float UnbendRate;
    float UnrotateSpeed;
    float MaxSpeed;
    PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum AccelerationType;

    float Acceleration;
    float LerpRate;
    float MaxDistanceInOneDirection;
    float MaxTimeInOneDirection;
    struct SwimmingLocomotion* m_locomotion;
    struct Vector3 m_initialPosition;
    PiranhaLocomotionIdleBehaviour_State__Enum m_state;

    float m_timeInState;
    struct Vector2 m_targetSpeed;
    float m_bendValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaLocomotionIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
