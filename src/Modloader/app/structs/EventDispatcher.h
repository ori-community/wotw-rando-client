#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDispatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDispatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDispatcher_DEFINED)
#include <Modloader/app/structs/EventDispatcher__Fields.h>
#if defined(IL2CPP_STRUCT_EventDispatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDispatcher_DEFINED
struct EventDispatcher__Class;
struct EventDispatcher {
    struct EventDispatcher__Class* klass;
    MonitorData* monitor;
    struct EventDispatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDispatcher_FWDDECL)
#define IL2CPP_STRUCT_EventDispatcher_FWDDECL
#include <Modloader/app/structs/EventDispatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDispatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDispatcher_DEFINED) && !defined(IL2CPP_STRUCT_EventDispatcher_FWDDECL)
#include <Modloader/app/structs/EventDispatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDispatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
