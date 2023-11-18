#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleSpawnBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour_DEFINED)
#include <Modloader/app/structs/TentacleSpawnBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleSpawnBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour_DEFINED
struct TentacleSpawnBehaviour__Class;
struct TentacleSpawnBehaviour {
    struct TentacleSpawnBehaviour__Class* klass;
    MonitorData* monitor;
    struct TentacleSpawnBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TentacleSpawnBehaviour_FWDDECL
#include <Modloader/app/structs/TentacleSpawnBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleSpawnBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TentacleSpawnBehaviour_FWDDECL)
#include <Modloader/app/structs/TentacleSpawnBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleSpawnBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
