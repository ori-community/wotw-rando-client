#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnTask_DEFINED)
#include <Modloader/app/structs/MinerSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_MinerSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerSpawnTask_DEFINED
struct MinerSpawnTask__Class;
struct MinerSpawnTask {
    struct MinerSpawnTask__Class* klass;
    MonitorData* monitor;
    struct MinerSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_MinerSpawnTask_FWDDECL
#include <Modloader/app/structs/MinerSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_MinerSpawnTask_FWDDECL)
#include <Modloader/app/structs/MinerSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
