#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilerExt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilerExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerExt_DEFINED)
#define IL2CPP_STRUCT_ProfilerExt_DEFINED
struct ProfilerExt__Class;
struct ProfilerExt {
    struct ProfilerExt__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProfilerExt_FWDDECL)
#define IL2CPP_STRUCT_ProfilerExt_FWDDECL
#include <Modloader/app/structs/ProfilerExt__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilerExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerExt_DEFINED) && !defined(IL2CPP_STRUCT_ProfilerExt_FWDDECL)
#include <Modloader/app/structs/ProfilerExt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilerExt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
