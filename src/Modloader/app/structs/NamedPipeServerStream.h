#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamedPipeServerStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamedPipeServerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream_DEFINED)
#include <Modloader/app/structs/NamedPipeServerStream__Fields.h>
#if defined(IL2CPP_STRUCT_NamedPipeServerStream__Fields_DEFINED)
#define IL2CPP_STRUCT_NamedPipeServerStream_DEFINED
struct NamedPipeServerStream__Class;
struct NamedPipeServerStream {
    struct NamedPipeServerStream__Class* klass;
    MonitorData* monitor;
    struct NamedPipeServerStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream_FWDDECL)
#define IL2CPP_STRUCT_NamedPipeServerStream_FWDDECL
#include <Modloader/app/structs/NamedPipeServerStream__Class.h>
#endif
#undef IL2CPP_STRUCT_NamedPipeServerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream_DEFINED) && !defined(IL2CPP_STRUCT_NamedPipeServerStream_FWDDECL)
#include <Modloader/app/structs/NamedPipeServerStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamedPipeServerStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
