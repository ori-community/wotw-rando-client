#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IClientChannelSinkProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IClientChannelSinkProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClientChannelSinkProvider_DEFINED)
#define IL2CPP_STRUCT_IClientChannelSinkProvider_DEFINED
struct IClientChannelSinkProvider__Class;
struct IClientChannelSinkProvider {
    struct IClientChannelSinkProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IClientChannelSinkProvider_FWDDECL)
#define IL2CPP_STRUCT_IClientChannelSinkProvider_FWDDECL
#include <Modloader/app/structs/IClientChannelSinkProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IClientChannelSinkProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClientChannelSinkProvider_DEFINED) && !defined(IL2CPP_STRUCT_IClientChannelSinkProvider_FWDDECL)
#include <Modloader/app/structs/IClientChannelSinkProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IClientChannelSinkProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
