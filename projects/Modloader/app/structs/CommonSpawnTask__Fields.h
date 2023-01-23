#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommonSpawnTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommonSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_CommonSpawnTask__Fields_DEFINED
struct MoonTimeline;
struct CommonSpawnTask__Fields {
    struct EntitySpawnTask__Fields _;
    struct MoonTimeline* SpawnTimeline;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_CommonSpawnTask__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CommonSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_FWDDECL)
#include <Modloader/app/structs/CommonSpawnTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommonSpawnTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
