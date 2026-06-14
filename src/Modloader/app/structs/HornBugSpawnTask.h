#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask_DEFINED)
#include <Modloader/app/structs/HornBugSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugSpawnTask_DEFINED
struct HornBugSpawnTask__Class;
struct HornBugSpawnTask {
    struct HornBugSpawnTask__Class* klass;
    MonitorData* monitor;
    struct HornBugSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_HornBugSpawnTask_FWDDECL
#include <Modloader/app/structs/HornBugSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_HornBugSpawnTask_FWDDECL)
#include <Modloader/app/structs/HornBugSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
