#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoSpawnTask_DEFINED)
#include <Modloader/app/structs/SkeetoSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoSpawnTask_DEFINED
struct SkeetoSpawnTask__Class;
struct SkeetoSpawnTask {
    struct SkeetoSpawnTask__Class* klass;
    MonitorData* monitor;
    struct SkeetoSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_SkeetoSpawnTask_FWDDECL
#include <Modloader/app/structs/SkeetoSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoSpawnTask_FWDDECL)
#include <Modloader/app/structs/SkeetoSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
