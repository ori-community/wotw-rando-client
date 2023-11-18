#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QueryOutputWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QueryOutputWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueryOutputWriter_DEFINED)
#include <Modloader/app/structs/QueryOutputWriter__Fields.h>
#if defined(IL2CPP_STRUCT_QueryOutputWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_QueryOutputWriter_DEFINED
struct QueryOutputWriter__Class;
struct QueryOutputWriter {
    struct QueryOutputWriter__Class* klass;
    MonitorData* monitor;
    struct QueryOutputWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QueryOutputWriter_FWDDECL)
#define IL2CPP_STRUCT_QueryOutputWriter_FWDDECL
#include <Modloader/app/structs/QueryOutputWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_QueryOutputWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueryOutputWriter_DEFINED) && !defined(IL2CPP_STRUCT_QueryOutputWriter_FWDDECL)
#include <Modloader/app/structs/QueryOutputWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QueryOutputWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
