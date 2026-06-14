#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerSample__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerSample__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerSample__Boxed_DEFINED)
#include <Modloader/app/structs/MoonProfilerSample.h>
#if defined(IL2CPP_STRUCT_MoonProfilerSample_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerSample__Boxed_DEFINED
struct MoonProfilerSample__Class;
struct MoonProfilerSample__Boxed {
    struct MoonProfilerSample__Class* klass;
    MonitorData* monitor;
    struct MoonProfilerSample fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerSample__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerSample__Boxed_FWDDECL
#include <Modloader/app/structs/MoonProfilerSample__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonProfilerSample__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerSample__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerSample__Boxed_FWDDECL)
#include <Modloader/app/structs/MoonProfilerSample__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerSample__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
