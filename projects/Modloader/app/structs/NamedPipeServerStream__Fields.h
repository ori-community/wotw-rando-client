#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamedPipeServerStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamedPipeServerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream__Fields_DEFINED)
#include <Modloader/app/structs/PipeStream__Fields.h>
#if defined(IL2CPP_STRUCT_PipeStream__Fields_DEFINED)
#define IL2CPP_STRUCT_NamedPipeServerStream__Fields_DEFINED
struct INamedPipeServer;
struct NamedPipeServerStream__Fields {
    struct PipeStream__Fields _;
    struct INamedPipeServer* impl;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_NamedPipeServerStream__Fields_FWDDECL
#include <Modloader/app/structs/INamedPipeServer.h>
#endif
#undef IL2CPP_STRUCT_NamedPipeServerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPipeServerStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NamedPipeServerStream__Fields_FWDDECL)
#include <Modloader/app/structs/NamedPipeServerStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamedPipeServerStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
