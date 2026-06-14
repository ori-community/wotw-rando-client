#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceJsonReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceJsonReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonReader_DEFINED)
#include <Modloader/app/structs/TraceJsonReader__Fields.h>
#if defined(IL2CPP_STRUCT_TraceJsonReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceJsonReader_DEFINED
struct TraceJsonReader__Class;
struct TraceJsonReader {
    struct TraceJsonReader__Class* klass;
    MonitorData* monitor;
    struct TraceJsonReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceJsonReader_FWDDECL)
#define IL2CPP_STRUCT_TraceJsonReader_FWDDECL
#include <Modloader/app/structs/TraceJsonReader__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceJsonReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonReader_DEFINED) && !defined(IL2CPP_STRUCT_TraceJsonReader_FWDDECL)
#include <Modloader/app/structs/TraceJsonReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceJsonReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
