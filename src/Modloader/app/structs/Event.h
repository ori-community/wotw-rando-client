#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Event_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Event_INITIALIZING
#if !defined(IL2CPP_STRUCT_Event_DEFINED)
#include <Modloader/app/structs/Event__Fields.h>
#if defined(IL2CPP_STRUCT_Event__Fields_DEFINED)
#define IL2CPP_STRUCT_Event_DEFINED
struct Event__Class;
struct Event {
    struct Event__Class* klass;
    MonitorData* monitor;
    struct Event__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Event_FWDDECL)
#define IL2CPP_STRUCT_Event_FWDDECL
#include <Modloader/app/structs/Event__Class.h>
#endif
#undef IL2CPP_STRUCT_Event_INITIALIZING
#if !defined(IL2CPP_STRUCT_Event_DEFINED) && !defined(IL2CPP_STRUCT_Event_FWDDECL)
#include <Modloader/app/structs/Event.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Event.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
