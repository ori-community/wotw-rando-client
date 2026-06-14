#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_SampleStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats_DEFINED)
#include <Modloader/app/structs/MicroProfiler_SampleStats__Fields.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats_DEFINED
struct MicroProfiler_SampleStats__Class;
struct MicroProfiler_SampleStats {
    struct MicroProfiler_SampleStats__Class* klass;
    MonitorData* monitor;
    struct MicroProfiler_SampleStats__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats_FWDDECL
#include <Modloader/app/structs/MicroProfiler_SampleStats__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_SampleStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
