#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProfilerViewer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProfilerViewer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilerViewer_DEFINED)
#include <Modloader/app/structs/ObjectProfilerViewer__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectProfilerViewer__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectProfilerViewer_DEFINED
struct ObjectProfilerViewer__Class;
struct ObjectProfilerViewer {
    struct ObjectProfilerViewer__Class* klass;
    MonitorData* monitor;
    struct ObjectProfilerViewer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectProfilerViewer_FWDDECL)
#define IL2CPP_STRUCT_ObjectProfilerViewer_FWDDECL
#include <Modloader/app/structs/ObjectProfilerViewer__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectProfilerViewer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilerViewer_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProfilerViewer_FWDDECL)
#include <Modloader/app/structs/ObjectProfilerViewer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProfilerViewer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
