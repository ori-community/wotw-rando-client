#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Profiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Profiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Profiler_DEFINED)
#define IL2CPP_STRUCT_Profiler_DEFINED
struct Profiler__Class;
struct Profiler {
    struct Profiler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Profiler_FWDDECL)
#define IL2CPP_STRUCT_Profiler_FWDDECL
#include <Modloader/app/structs/Profiler__Class.h>
#endif
#undef IL2CPP_STRUCT_Profiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Profiler_DEFINED) && !defined(IL2CPP_STRUCT_Profiler_FWDDECL)
#include <Modloader/app/structs/Profiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Profiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
