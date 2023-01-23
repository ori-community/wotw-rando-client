#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawnerManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawnerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_DEFINED)
#include <Modloader/app/structs/OrbSpawnerManager__Fields.h>
#if defined(IL2CPP_STRUCT_OrbSpawnerManager__Fields_DEFINED)
#define IL2CPP_STRUCT_OrbSpawnerManager_DEFINED
struct OrbSpawnerManager__Class;
struct OrbSpawnerManager {
    struct OrbSpawnerManager__Class* klass;
    MonitorData* monitor;
    struct OrbSpawnerManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawnerManager_FWDDECL
#include <Modloader/app/structs/OrbSpawnerManager__Class.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawnerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawnerManager_FWDDECL)
#include <Modloader/app/structs/OrbSpawnerManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawnerManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
