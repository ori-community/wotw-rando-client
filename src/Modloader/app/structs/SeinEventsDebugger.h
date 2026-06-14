#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEventsDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEventsDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_DEFINED)
#include <Modloader/app/structs/SeinEventsDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_SeinEventsDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEventsDebugger_DEFINED
struct SeinEventsDebugger__Class;
struct SeinEventsDebugger {
    struct SeinEventsDebugger__Class* klass;
    MonitorData* monitor;
    struct SeinEventsDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_FWDDECL)
#define IL2CPP_STRUCT_SeinEventsDebugger_FWDDECL
#include <Modloader/app/structs/SeinEventsDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEventsDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_DEFINED) && !defined(IL2CPP_STRUCT_SeinEventsDebugger_FWDDECL)
#include <Modloader/app/structs/SeinEventsDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEventsDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
