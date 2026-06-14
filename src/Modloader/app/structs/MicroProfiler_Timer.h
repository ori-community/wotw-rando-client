#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_Timer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer_DEFINED)
#include <Modloader/app/structs/MicroProfiler_Timer__Fields.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_Timer__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_Timer_DEFINED
struct MicroProfiler_Timer__Class;
struct MicroProfiler_Timer {
    struct MicroProfiler_Timer__Class* klass;
    MonitorData* monitor;
    struct MicroProfiler_Timer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_Timer_FWDDECL
#include <Modloader/app/structs/MicroProfiler_Timer__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_Timer_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_Timer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_Timer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
