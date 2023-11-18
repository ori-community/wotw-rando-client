#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOneDSTransportPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOneDSTransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOneDSTransportPlugin_DEFINED)
#define IL2CPP_STRUCT_IOneDSTransportPlugin_DEFINED
struct IOneDSTransportPlugin__Class;
struct IOneDSTransportPlugin {
    struct IOneDSTransportPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IOneDSTransportPlugin_FWDDECL)
#define IL2CPP_STRUCT_IOneDSTransportPlugin_FWDDECL
#include <Modloader/app/structs/IOneDSTransportPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_IOneDSTransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOneDSTransportPlugin_DEFINED) && !defined(IL2CPP_STRUCT_IOneDSTransportPlugin_FWDDECL)
#include <Modloader/app/structs/IOneDSTransportPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOneDSTransportPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
