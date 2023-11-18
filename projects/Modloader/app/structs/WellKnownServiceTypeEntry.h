#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WellKnownServiceTypeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry_DEFINED)
#include <Modloader/app/structs/WellKnownServiceTypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry_DEFINED
struct WellKnownServiceTypeEntry__Class;
struct WellKnownServiceTypeEntry {
    struct WellKnownServiceTypeEntry__Class* klass;
    MonitorData* monitor;
    struct WellKnownServiceTypeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry_FWDDECL)
#define IL2CPP_STRUCT_WellKnownServiceTypeEntry_FWDDECL
#include <Modloader/app/structs/WellKnownServiceTypeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_WellKnownServiceTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry_DEFINED) && !defined(IL2CPP_STRUCT_WellKnownServiceTypeEntry_FWDDECL)
#include <Modloader/app/structs/WellKnownServiceTypeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WellKnownServiceTypeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
