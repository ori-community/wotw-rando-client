#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoNestEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoNestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity__Fields_DEFINED)
#include <Modloader/app/structs/Entity__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SkeetoNestEntity__Fields_DEFINED
struct MoonTimeline;
struct List_1_SkeetoPlaceholder_;
struct SkeetoNestEntity__Fields {
    struct Entity__Fields _;
    float FirstWaveSpawnTimeout;
    float SpawnTimeout;
    float SpawnAfterKillMinimumTime;
    float MiniDistanceToSpawnSkeeto;
    int32_t MaxExpOrbs;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* SpawnTimeline;
    struct MoonTimeline* DeathTimeline;
    struct List_1_SkeetoPlaceholder_* m_skeetoPlaceholders;
    float m_spawnTimer;
    int32_t m_expOrbsToAssign;
    int32_t m_expPerSkeeto;
    float m_repelForceDistance;
    bool m_initiated;
    int32_t m_spawnCount;
    struct Vector2 InfluenceDistanceMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoNestEntity__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SkeetoPlaceholder_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SkeetoNestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoNestEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoNestEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoNestEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
