#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputWriter_DEFINED)
#include <Modloader/app/structs/OutputWriter__Fields.h>
#if defined(IL2CPP_STRUCT_OutputWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_OutputWriter_DEFINED
struct OutputWriter__Class;
struct OutputWriter {
    struct OutputWriter__Class* klass;
    MonitorData* monitor;
    struct OutputWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OutputWriter_FWDDECL)
#define IL2CPP_STRUCT_OutputWriter_FWDDECL
#include <Modloader/app/structs/OutputWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_OutputWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputWriter_DEFINED) && !defined(IL2CPP_STRUCT_OutputWriter_FWDDECL)
#include <Modloader/app/structs/OutputWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
