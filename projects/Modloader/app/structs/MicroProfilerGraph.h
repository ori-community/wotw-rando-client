#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_DEFINED)
#include <Modloader/app/structs/MicroProfilerGraph__Fields.h>
#if defined(IL2CPP_STRUCT_MicroProfilerGraph__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerGraph_DEFINED
struct MicroProfilerGraph__Class;
struct MicroProfilerGraph {
    struct MicroProfilerGraph__Class* klass;
    MonitorData* monitor;
    struct MicroProfilerGraph__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerGraph_FWDDECL
#include <Modloader/app/structs/MicroProfilerGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerGraph_FWDDECL)
#include <Modloader/app/structs/MicroProfilerGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
