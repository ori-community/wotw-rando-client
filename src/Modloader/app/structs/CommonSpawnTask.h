#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommonSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommonSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonSpawnTask_DEFINED)
#include <Modloader/app/structs/CommonSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_CommonSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_CommonSpawnTask_DEFINED
struct CommonSpawnTask__Class;
struct CommonSpawnTask {
    struct CommonSpawnTask__Class* klass;
    MonitorData* monitor;
    struct CommonSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommonSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_CommonSpawnTask_FWDDECL
#include <Modloader/app/structs/CommonSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_CommonSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_CommonSpawnTask_FWDDECL)
#include <Modloader/app/structs/CommonSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommonSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
