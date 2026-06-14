#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDsUnityHttpPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDsUnityHttpPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDsUnityHttpPlugin_DEFINED)
#define IL2CPP_STRUCT_OneDsUnityHttpPlugin_DEFINED
struct OneDsUnityHttpPlugin__Class;
struct OneDsUnityHttpPlugin {
    struct OneDsUnityHttpPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OneDsUnityHttpPlugin_FWDDECL)
#define IL2CPP_STRUCT_OneDsUnityHttpPlugin_FWDDECL
#include <Modloader/app/structs/OneDsUnityHttpPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_OneDsUnityHttpPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDsUnityHttpPlugin_DEFINED) && !defined(IL2CPP_STRUCT_OneDsUnityHttpPlugin_FWDDECL)
#include <Modloader/app/structs/OneDsUnityHttpPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDsUnityHttpPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
