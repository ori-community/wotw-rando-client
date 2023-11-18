#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalProxySelection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalProxySelection_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalProxySelection_DEFINED)
#define IL2CPP_STRUCT_GlobalProxySelection_DEFINED
struct GlobalProxySelection__Class;
struct GlobalProxySelection {
    struct GlobalProxySelection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GlobalProxySelection_FWDDECL)
#define IL2CPP_STRUCT_GlobalProxySelection_FWDDECL
#include <Modloader/app/structs/GlobalProxySelection__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalProxySelection_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalProxySelection_DEFINED) && !defined(IL2CPP_STRUCT_GlobalProxySelection_FWDDECL)
#include <Modloader/app/structs/GlobalProxySelection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalProxySelection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
