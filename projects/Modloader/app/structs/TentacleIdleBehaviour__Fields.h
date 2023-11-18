#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask_1_TentacleEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask_1_TentacleEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_DEFINED
struct MoonTimeline;
struct TentacleIdleBehaviour__Fields {
    struct EntityLocomotionTask_1_TentacleEntity___Fields _;
    struct MoonTimeline* IdleTimeline;
    struct Vector2 RandomTargetCenter;
    float RandomTargetRadius;
    float ChangeTargetTime;
    float headRotationAlignmentToTarget;
    float headAlignmentMinDistance;
    float targetLerp;
    float maxSpeed;
    struct Vector3 m_targetPosition;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
