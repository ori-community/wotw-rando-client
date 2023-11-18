#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventId_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventId_DEFINED)
#define IL2CPP_STRUCT_EventId_DEFINED
struct EventId__Class;
struct EventId {
    struct EventId__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EventId_FWDDECL)
#define IL2CPP_STRUCT_EventId_FWDDECL
#include <Modloader/app/structs/EventId__Class.h>
#endif
#undef IL2CPP_STRUCT_EventId_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventId_DEFINED) && !defined(IL2CPP_STRUCT_EventId_FWDDECL)
#include <Modloader/app/structs/EventId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
