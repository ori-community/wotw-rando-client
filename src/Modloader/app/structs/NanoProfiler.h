#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NanoProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NanoProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler_DEFINED)
#include <Modloader/app/structs/NanoProfiler__Fields.h>
#if defined(IL2CPP_STRUCT_NanoProfiler__Fields_DEFINED)
#define IL2CPP_STRUCT_NanoProfiler_DEFINED
struct NanoProfiler__Class;
struct NanoProfiler {
    struct NanoProfiler__Class* klass;
    MonitorData* monitor;
    struct NanoProfiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NanoProfiler_FWDDECL)
#define IL2CPP_STRUCT_NanoProfiler_FWDDECL
#include <Modloader/app/structs/NanoProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_NanoProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler_DEFINED) && !defined(IL2CPP_STRUCT_NanoProfiler_FWDDECL)
#include <Modloader/app/structs/NanoProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NanoProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
