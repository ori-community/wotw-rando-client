#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawner_DEFINED)
#include <Modloader/app/structs/OrbSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_OrbSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_OrbSpawner_DEFINED
struct OrbSpawner__Class;
struct OrbSpawner {
    struct OrbSpawner__Class* klass;
    MonitorData* monitor;
    struct OrbSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawner_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawner_FWDDECL
#include <Modloader/app/structs/OrbSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawner_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawner_FWDDECL)
#include <Modloader/app/structs/OrbSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
