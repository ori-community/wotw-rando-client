#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisSpawnTask_DEFINED)
#include <Modloader/app/structs/MantisSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_MantisSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MantisSpawnTask_DEFINED
struct MantisSpawnTask__Class;
struct MantisSpawnTask {
    struct MantisSpawnTask__Class* klass;
    MonitorData* monitor;
    struct MantisSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_MantisSpawnTask_FWDDECL
#include <Modloader/app/structs/MantisSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_MantisSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_MantisSpawnTask_FWDDECL)
#include <Modloader/app/structs/MantisSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
