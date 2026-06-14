#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickSpawner_DEFINED)
#include <Modloader/app/structs/StickSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_StickSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_StickSpawner_DEFINED
struct StickSpawner__Class;
struct StickSpawner {
    struct StickSpawner__Class* klass;
    MonitorData* monitor;
    struct StickSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickSpawner_FWDDECL)
#define IL2CPP_STRUCT_StickSpawner_FWDDECL
#include <Modloader/app/structs/StickSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_StickSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickSpawner_DEFINED) && !defined(IL2CPP_STRUCT_StickSpawner_FWDDECL)
#include <Modloader/app/structs/StickSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
