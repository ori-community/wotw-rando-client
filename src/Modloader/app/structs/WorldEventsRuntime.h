#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEventsRuntime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEventsRuntime_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsRuntime_DEFINED)
#include <Modloader/app/structs/WorldEventsRuntime__Fields.h>
#if defined(IL2CPP_STRUCT_WorldEventsRuntime__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEventsRuntime_DEFINED
struct WorldEventsRuntime__Class;
struct WorldEventsRuntime {
    struct WorldEventsRuntime__Class* klass;
    MonitorData* monitor;
    struct WorldEventsRuntime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEventsRuntime_FWDDECL)
#define IL2CPP_STRUCT_WorldEventsRuntime_FWDDECL
#include <Modloader/app/structs/WorldEventsRuntime__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEventsRuntime_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsRuntime_DEFINED) && !defined(IL2CPP_STRUCT_WorldEventsRuntime_FWDDECL)
#include <Modloader/app/structs/WorldEventsRuntime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEventsRuntime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
