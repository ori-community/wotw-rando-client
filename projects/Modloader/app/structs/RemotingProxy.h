#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingProxy_DEFINED)
#include <Modloader/app/structs/RemotingProxy__Fields.h>
#if defined(IL2CPP_STRUCT_RemotingProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingProxy_DEFINED
struct RemotingProxy__Class;
struct RemotingProxy {
    struct RemotingProxy__Class* klass;
    MonitorData* monitor;
    struct RemotingProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemotingProxy_FWDDECL)
#define IL2CPP_STRUCT_RemotingProxy_FWDDECL
#include <Modloader/app/structs/RemotingProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingProxy_DEFINED) && !defined(IL2CPP_STRUCT_RemotingProxy_FWDDECL)
#include <Modloader/app/structs/RemotingProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
