#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Respawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Respawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_Respawner_DEFINED)
#include <Modloader/app/structs/Respawner__Fields.h>
#if defined(IL2CPP_STRUCT_Respawner__Fields_DEFINED)
#define IL2CPP_STRUCT_Respawner_DEFINED
struct Respawner__Class;
struct Respawner {
    struct Respawner__Class* klass;
    MonitorData* monitor;
    struct Respawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Respawner_FWDDECL)
#define IL2CPP_STRUCT_Respawner_FWDDECL
#include <Modloader/app/structs/Respawner__Class.h>
#endif
#undef IL2CPP_STRUCT_Respawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_Respawner_DEFINED) && !defined(IL2CPP_STRUCT_Respawner_FWDDECL)
#include <Modloader/app/structs/Respawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Respawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
