#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerExample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerExample_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerExample_DEFINED)
#include <Modloader/app/structs/TimerExample__Fields.h>
#if defined(IL2CPP_STRUCT_TimerExample__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerExample_DEFINED
struct TimerExample__Class;
struct TimerExample {
    struct TimerExample__Class* klass;
    MonitorData* monitor;
    struct TimerExample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerExample_FWDDECL)
#define IL2CPP_STRUCT_TimerExample_FWDDECL
#include <Modloader/app/structs/TimerExample__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerExample_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerExample_DEFINED) && !defined(IL2CPP_STRUCT_TimerExample_FWDDECL)
#include <Modloader/app/structs/TimerExample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerExample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
