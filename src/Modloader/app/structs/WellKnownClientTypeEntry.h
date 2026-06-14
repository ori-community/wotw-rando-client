#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WellKnownClientTypeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WellKnownClientTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownClientTypeEntry_DEFINED)
#include <Modloader/app/structs/WellKnownClientTypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_WellKnownClientTypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_WellKnownClientTypeEntry_DEFINED
struct WellKnownClientTypeEntry__Class;
struct WellKnownClientTypeEntry {
    struct WellKnownClientTypeEntry__Class* klass;
    MonitorData* monitor;
    struct WellKnownClientTypeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WellKnownClientTypeEntry_FWDDECL)
#define IL2CPP_STRUCT_WellKnownClientTypeEntry_FWDDECL
#include <Modloader/app/structs/WellKnownClientTypeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_WellKnownClientTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownClientTypeEntry_DEFINED) && !defined(IL2CPP_STRUCT_WellKnownClientTypeEntry_FWDDECL)
#include <Modloader/app/structs/WellKnownClientTypeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WellKnownClientTypeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
