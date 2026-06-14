#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_DEFINED)
#include <Modloader/app/structs/MicroProfilerInspector__Fields.h>
#if defined(IL2CPP_STRUCT_MicroProfilerInspector__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector_DEFINED
struct MicroProfilerInspector__Class;
struct MicroProfilerInspector {
    struct MicroProfilerInspector__Class* klass;
    MonitorData* monitor;
    struct MicroProfilerInspector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector_FWDDECL
#include <Modloader/app/structs/MicroProfilerInspector__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
