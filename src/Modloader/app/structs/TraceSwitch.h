#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceSwitch_DEFINED)
#include <Modloader/app/structs/TraceSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_TraceSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceSwitch_DEFINED
struct TraceSwitch__Class;
struct TraceSwitch {
    struct TraceSwitch__Class* klass;
    MonitorData* monitor;
    struct TraceSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceSwitch_FWDDECL)
#define IL2CPP_STRUCT_TraceSwitch_FWDDECL
#include <Modloader/app/structs/TraceSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceSwitch_DEFINED) && !defined(IL2CPP_STRUCT_TraceSwitch_FWDDECL)
#include <Modloader/app/structs/TraceSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
