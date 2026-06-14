#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_DEFINED)
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_StatInfo_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_DEFINED
struct MicroProfiler_StatInfo__Class;
struct MicroProfiler_StatInfo__Boxed {
    struct MicroProfiler_StatInfo__Class* klass;
    MonitorData* monitor;
    struct MicroProfiler_StatInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_FWDDECL
#include <Modloader/app/structs/MicroProfiler_StatInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_StatInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_StatInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
