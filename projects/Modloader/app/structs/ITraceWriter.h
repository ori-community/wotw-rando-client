#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITraceWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITraceWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITraceWriter_DEFINED)
#define IL2CPP_STRUCT_ITraceWriter_DEFINED
struct ITraceWriter__Class;
struct ITraceWriter {
    struct ITraceWriter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITraceWriter_FWDDECL)
#define IL2CPP_STRUCT_ITraceWriter_FWDDECL
#include <Modloader/app/structs/ITraceWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_ITraceWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITraceWriter_DEFINED) && !defined(IL2CPP_STRUCT_ITraceWriter_FWDDECL)
#include <Modloader/app/structs/ITraceWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITraceWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
