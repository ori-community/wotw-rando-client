#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitySpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitySpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnTask_DEFINED)
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntitySpawnTask_DEFINED
struct EntitySpawnTask__Class;
struct EntitySpawnTask {
    struct EntitySpawnTask__Class* klass;
    MonitorData* monitor;
    struct EntitySpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntitySpawnTask_FWDDECL)
#define IL2CPP_STRUCT_EntitySpawnTask_FWDDECL
#include <Modloader/app/structs/EntitySpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_EntitySpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_EntitySpawnTask_FWDDECL)
#include <Modloader/app/structs/EntitySpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitySpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
