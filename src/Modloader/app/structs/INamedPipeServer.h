#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INamedPipeServer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INamedPipeServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_INamedPipeServer_DEFINED)
#define IL2CPP_STRUCT_INamedPipeServer_DEFINED
struct INamedPipeServer__Class;
struct INamedPipeServer {
    struct INamedPipeServer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INamedPipeServer_FWDDECL)
#define IL2CPP_STRUCT_INamedPipeServer_FWDDECL
#include <Modloader/app/structs/INamedPipeServer__Class.h>
#endif
#undef IL2CPP_STRUCT_INamedPipeServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_INamedPipeServer_DEFINED) && !defined(IL2CPP_STRUCT_INamedPipeServer_FWDDECL)
#include <Modloader/app/structs/INamedPipeServer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INamedPipeServer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
