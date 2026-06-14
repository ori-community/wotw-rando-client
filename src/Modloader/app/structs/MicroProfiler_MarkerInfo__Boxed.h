#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_DEFINED)
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_DEFINED
struct MicroProfiler_MarkerInfo__Class;
struct MicroProfiler_MarkerInfo__Boxed {
    struct MicroProfiler_MarkerInfo__Class* klass;
    MonitorData* monitor;
    struct MicroProfiler_MarkerInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_FWDDECL
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
