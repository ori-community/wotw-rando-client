#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer_DEFINED)
#include <Modloader/app/structs/OutputBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_OutputBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_OutputBuffer_DEFINED
struct OutputBuffer__Class;
struct OutputBuffer {
    struct OutputBuffer__Class* klass;
    MonitorData* monitor;
    struct OutputBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OutputBuffer_FWDDECL)
#define IL2CPP_STRUCT_OutputBuffer_FWDDECL
#include <Modloader/app/structs/OutputBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_OutputBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer_DEFINED) && !defined(IL2CPP_STRUCT_OutputBuffer_FWDDECL)
#include <Modloader/app/structs/OutputBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
