#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_DEFINED
struct MicroProfiler__Class;
struct MicroProfiler {
    struct MicroProfiler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_FWDDECL
#include <Modloader/app/structs/MicroProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_FWDDECL)
#include <Modloader/app/structs/MicroProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
