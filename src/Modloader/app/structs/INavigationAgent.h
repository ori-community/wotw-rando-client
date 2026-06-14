#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INavigationAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INavigationAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_INavigationAgent_DEFINED)
#define IL2CPP_STRUCT_INavigationAgent_DEFINED
struct INavigationAgent__Class;
struct INavigationAgent {
    struct INavigationAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INavigationAgent_FWDDECL)
#define IL2CPP_STRUCT_INavigationAgent_FWDDECL
#include <Modloader/app/structs/INavigationAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_INavigationAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_INavigationAgent_DEFINED) && !defined(IL2CPP_STRUCT_INavigationAgent_FWDDECL)
#include <Modloader/app/structs/INavigationAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INavigationAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
