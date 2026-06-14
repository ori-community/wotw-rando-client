#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEventsOnAwake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEventsOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_DEFINED)
#include <Modloader/app/structs/WorldEventsOnAwake__Fields.h>
#if defined(IL2CPP_STRUCT_WorldEventsOnAwake__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEventsOnAwake_DEFINED
struct WorldEventsOnAwake__Class;
struct WorldEventsOnAwake {
    struct WorldEventsOnAwake__Class* klass;
    MonitorData* monitor;
    struct WorldEventsOnAwake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_FWDDECL)
#define IL2CPP_STRUCT_WorldEventsOnAwake_FWDDECL
#include <Modloader/app/structs/WorldEventsOnAwake__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEventsOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_DEFINED) && !defined(IL2CPP_STRUCT_WorldEventsOnAwake_FWDDECL)
#include <Modloader/app/structs/WorldEventsOnAwake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEventsOnAwake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
