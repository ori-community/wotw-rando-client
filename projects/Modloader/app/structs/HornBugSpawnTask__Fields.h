#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugSpawnTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugSpawnTask__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Transform;
struct HornBugSpawnTask__Fields {
    struct EntitySpawnTask__Fields _;
    struct MoonTimeline* SpawnSlowTimeline;
    struct MoonTimeline* SpawnFastTimeline;
    struct MoonTimeline* SpawnWallBurstTimeline;
    struct EventTriggerAnimator* WallBurstTrigger;
    struct Transform* RootJNT;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugSpawnTask__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HornBugSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugSpawnTask__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugSpawnTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugSpawnTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
