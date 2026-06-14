#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDsWebRequestPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDsWebRequestPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDsWebRequestPlugin_DEFINED)
#define IL2CPP_STRUCT_OneDsWebRequestPlugin_DEFINED
struct OneDsWebRequestPlugin__Class;
struct OneDsWebRequestPlugin {
    struct OneDsWebRequestPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OneDsWebRequestPlugin_FWDDECL)
#define IL2CPP_STRUCT_OneDsWebRequestPlugin_FWDDECL
#include <Modloader/app/structs/OneDsWebRequestPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_OneDsWebRequestPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDsWebRequestPlugin_DEFINED) && !defined(IL2CPP_STRUCT_OneDsWebRequestPlugin_FWDDECL)
#include <Modloader/app/structs/OneDsWebRequestPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDsWebRequestPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
