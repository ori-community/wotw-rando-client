#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PipeStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PipeStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeStream_DEFINED)
#include <Modloader/app/structs/PipeStream__Fields.h>
#if defined(IL2CPP_STRUCT_PipeStream__Fields_DEFINED)
#define IL2CPP_STRUCT_PipeStream_DEFINED
struct PipeStream__Class;
struct PipeStream {
    struct PipeStream__Class* klass;
    MonitorData* monitor;
    struct PipeStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PipeStream_FWDDECL)
#define IL2CPP_STRUCT_PipeStream_FWDDECL
#include <Modloader/app/structs/PipeStream__Class.h>
#endif
#undef IL2CPP_STRUCT_PipeStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeStream_DEFINED) && !defined(IL2CPP_STRUCT_PipeStream_FWDDECL)
#include <Modloader/app/structs/PipeStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PipeStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
