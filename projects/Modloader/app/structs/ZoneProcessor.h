#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoneProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneProcessor_DEFINED)
#include <Modloader/app/structs/ZoneProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_ZoneProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ZoneProcessor_DEFINED
struct ZoneProcessor__Class;
struct ZoneProcessor {
    struct ZoneProcessor__Class* klass;
    MonitorData* monitor;
    struct ZoneProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZoneProcessor_FWDDECL)
#define IL2CPP_STRUCT_ZoneProcessor_FWDDECL
#include <Modloader/app/structs/ZoneProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_ZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneProcessor_DEFINED) && !defined(IL2CPP_STRUCT_ZoneProcessor_FWDDECL)
#include <Modloader/app/structs/ZoneProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoneProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
