#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryProfiler_DEFINED)
#define IL2CPP_STRUCT_MemoryProfiler_DEFINED
struct MemoryProfiler__Class;
struct MemoryProfiler {
    struct MemoryProfiler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryProfiler_FWDDECL)
#define IL2CPP_STRUCT_MemoryProfiler_FWDDECL
#include <Modloader/app/structs/MemoryProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryProfiler_DEFINED) && !defined(IL2CPP_STRUCT_MemoryProfiler_FWDDECL)
#include <Modloader/app/structs/MemoryProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
