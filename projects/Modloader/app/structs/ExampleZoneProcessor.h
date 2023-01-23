#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExampleZoneProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExampleZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor_DEFINED)
#include <Modloader/app/structs/ExampleZoneProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_ExampleZoneProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ExampleZoneProcessor_DEFINED
struct ExampleZoneProcessor__Class;
struct ExampleZoneProcessor {
    struct ExampleZoneProcessor__Class* klass;
    MonitorData* monitor;
    struct ExampleZoneProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor_FWDDECL)
#define IL2CPP_STRUCT_ExampleZoneProcessor_FWDDECL
#include <Modloader/app/structs/ExampleZoneProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_ExampleZoneProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor_DEFINED) && !defined(IL2CPP_STRUCT_ExampleZoneProcessor_FWDDECL)
#include <Modloader/app/structs/ExampleZoneProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExampleZoneProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
