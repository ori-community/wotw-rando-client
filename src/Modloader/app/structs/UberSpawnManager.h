#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSpawnManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSpawnManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSpawnManager_DEFINED)
#include <Modloader/app/structs/UberSpawnManager__Fields.h>
#if defined(IL2CPP_STRUCT_UberSpawnManager__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSpawnManager_DEFINED
struct UberSpawnManager__Class;
struct UberSpawnManager {
    struct UberSpawnManager__Class* klass;
    MonitorData* monitor;
    struct UberSpawnManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSpawnManager_FWDDECL)
#define IL2CPP_STRUCT_UberSpawnManager_FWDDECL
#include <Modloader/app/structs/UberSpawnManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UberSpawnManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSpawnManager_DEFINED) && !defined(IL2CPP_STRUCT_UberSpawnManager_FWDDECL)
#include <Modloader/app/structs/UberSpawnManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSpawnManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
