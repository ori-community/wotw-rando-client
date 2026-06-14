#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITransportPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITransportPlugin_DEFINED)
#define IL2CPP_STRUCT_ITransportPlugin_DEFINED
struct ITransportPlugin__Class;
struct ITransportPlugin {
    struct ITransportPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITransportPlugin_FWDDECL)
#define IL2CPP_STRUCT_ITransportPlugin_FWDDECL
#include <Modloader/app/structs/ITransportPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_ITransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITransportPlugin_DEFINED) && !defined(IL2CPP_STRUCT_ITransportPlugin_FWDDECL)
#include <Modloader/app/structs/ITransportPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITransportPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
