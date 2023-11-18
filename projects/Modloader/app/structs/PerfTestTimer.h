#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerfTestTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerfTestTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_DEFINED)
#include <Modloader/app/structs/PerfTestTimer__Fields.h>
#if defined(IL2CPP_STRUCT_PerfTestTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_PerfTestTimer_DEFINED
struct PerfTestTimer__Class;
struct PerfTestTimer {
    struct PerfTestTimer__Class* klass;
    MonitorData* monitor;
    struct PerfTestTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerfTestTimer_FWDDECL)
#define IL2CPP_STRUCT_PerfTestTimer_FWDDECL
#include <Modloader/app/structs/PerfTestTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_PerfTestTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_DEFINED) && !defined(IL2CPP_STRUCT_PerfTestTimer_FWDDECL)
#include <Modloader/app/structs/PerfTestTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerfTestTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
