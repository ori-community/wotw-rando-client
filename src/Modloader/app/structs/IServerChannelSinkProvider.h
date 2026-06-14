#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IServerChannelSinkProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IServerChannelSinkProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerChannelSinkProvider_DEFINED)
#define IL2CPP_STRUCT_IServerChannelSinkProvider_DEFINED
struct IServerChannelSinkProvider__Class;
struct IServerChannelSinkProvider {
    struct IServerChannelSinkProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IServerChannelSinkProvider_FWDDECL)
#define IL2CPP_STRUCT_IServerChannelSinkProvider_FWDDECL
#include <Modloader/app/structs/IServerChannelSinkProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IServerChannelSinkProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerChannelSinkProvider_DEFINED) && !defined(IL2CPP_STRUCT_IServerChannelSinkProvider_FWDDECL)
#include <Modloader/app/structs/IServerChannelSinkProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IServerChannelSinkProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
