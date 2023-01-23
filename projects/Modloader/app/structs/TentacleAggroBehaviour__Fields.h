#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_TentacleEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_TentacleEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_DEFINED
struct MoonTimeline;
struct TentacleAggroBehaviour__Fields {
    struct EntityBehaviourNode_1_TentacleEntity___Fields _;
    struct MoonTimeline* aggroTimeline;
    float headRotationAlignmentToTarget;
    float headAlignmentMinDistance;
    float targetLerp;
    float maxSpeed;
    float time;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleAggroBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAggroBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
