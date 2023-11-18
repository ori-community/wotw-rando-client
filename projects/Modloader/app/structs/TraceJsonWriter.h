#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceJsonWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceJsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonWriter_DEFINED)
#include <Modloader/app/structs/TraceJsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_TraceJsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceJsonWriter_DEFINED
struct TraceJsonWriter__Class;
struct TraceJsonWriter {
    struct TraceJsonWriter__Class* klass;
    MonitorData* monitor;
    struct TraceJsonWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceJsonWriter_FWDDECL)
#define IL2CPP_STRUCT_TraceJsonWriter_FWDDECL
#include <Modloader/app/structs/TraceJsonWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceJsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonWriter_DEFINED) && !defined(IL2CPP_STRUCT_TraceJsonWriter_FWDDECL)
#include <Modloader/app/structs/TraceJsonWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceJsonWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
