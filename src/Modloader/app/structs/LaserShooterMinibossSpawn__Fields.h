#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask_1_LaserShooterMinibossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask_1_LaserShooterMinibossEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_DEFINED
struct MoonTimeline;
struct LaserShooterMinibossSpawn__Fields {
    struct EntityTask_1_LaserShooterMinibossEntity___Fields _;
    struct MoonTimeline* CoreTimeline;
    float StartPadding;
    float EndPadding;
    float m_repairInterval;
    int32_t m_repairedCounter;
    float m_timeToNextRepair;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossSpawn__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossSpawn__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossSpawn__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
