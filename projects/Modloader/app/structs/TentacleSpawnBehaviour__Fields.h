#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask_1_TentacleEntity___Fields.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour_ExecutionState__Enum.h>
#if defined(IL2CPP_STRUCT_EntityTask_1_TentacleEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_TentacleSpawnBehaviour_ExecutionState__Enum_DEFINED)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_DEFINED
struct MoonTimeline;
struct TentacleSpawnBehaviour__Fields {
    struct EntityTask_1_TentacleEntity___Fields _;
    struct MoonTimeline* SpawnTimeline;
    struct MoonTimeline* SpawnUnderWaterTimeline;
    struct MoonTimeline* HiddenTimeline;
    float HeadAlignmentMinDistance;
    float targetLerp;
    float headRotationAlignmentToTarget;
    float headAlignmentMinDistance;
    float maxSpeed;
    float SpawnDelay;
    float m_time;
    float m_oldHeadAlignment;
    TentacleSpawnBehaviour_ExecutionState__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleSpawnBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleSpawnBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
