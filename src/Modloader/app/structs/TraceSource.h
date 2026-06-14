#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceSource_DEFINED)
#define IL2CPP_STRUCT_TraceSource_DEFINED
struct TraceSource__Class;
struct TraceSource {
    struct TraceSource__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TraceSource_FWDDECL)
#define IL2CPP_STRUCT_TraceSource_FWDDECL
#include <Modloader/app/structs/TraceSource__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceSource_DEFINED) && !defined(IL2CPP_STRUCT_TraceSource_FWDDECL)
#include <Modloader/app/structs/TraceSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
