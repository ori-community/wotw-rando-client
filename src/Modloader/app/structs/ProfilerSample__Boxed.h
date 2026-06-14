#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilerSample__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilerSample__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerSample__Boxed_DEFINED)
#include <Modloader/app/structs/ProfilerSample.h>
#if defined(IL2CPP_STRUCT_ProfilerSample_DEFINED)
#define IL2CPP_STRUCT_ProfilerSample__Boxed_DEFINED
struct ProfilerSample__Class;
struct ProfilerSample__Boxed {
    struct ProfilerSample__Class* klass;
    MonitorData* monitor;
    struct ProfilerSample fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProfilerSample__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ProfilerSample__Boxed_FWDDECL
#include <Modloader/app/structs/ProfilerSample__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilerSample__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerSample__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ProfilerSample__Boxed_FWDDECL)
#include <Modloader/app/structs/ProfilerSample__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilerSample__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
