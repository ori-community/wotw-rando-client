#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayFabTransportPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayFabTransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabTransportPlugin_DEFINED)
#define IL2CPP_STRUCT_IPlayFabTransportPlugin_DEFINED
struct IPlayFabTransportPlugin__Class;
struct IPlayFabTransportPlugin {
    struct IPlayFabTransportPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayFabTransportPlugin_FWDDECL)
#define IL2CPP_STRUCT_IPlayFabTransportPlugin_FWDDECL
#include <Modloader/app/structs/IPlayFabTransportPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlayFabTransportPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabTransportPlugin_DEFINED) && !defined(IL2CPP_STRUCT_IPlayFabTransportPlugin_FWDDECL)
#include <Modloader/app/structs/IPlayFabTransportPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayFabTransportPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
