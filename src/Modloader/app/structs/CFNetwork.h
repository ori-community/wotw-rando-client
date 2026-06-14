#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_DEFINED)
#define IL2CPP_STRUCT_CFNetwork_DEFINED
struct CFNetwork__Class;
struct CFNetwork {
    struct CFNetwork__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork_FWDDECL
#include <Modloader/app/structs/CFNetwork__Class.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork_FWDDECL)
#include <Modloader/app/structs/CFNetwork.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
