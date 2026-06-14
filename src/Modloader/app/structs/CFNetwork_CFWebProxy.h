#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork_CFWebProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy_DEFINED)
#include <Modloader/app/structs/CFNetwork_CFWebProxy__Fields.h>
#if defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy_DEFINED
struct CFNetwork_CFWebProxy__Class;
struct CFNetwork_CFWebProxy {
    struct CFNetwork_CFWebProxy__Class* klass;
    MonitorData* monitor;
    struct CFNetwork_CFWebProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy_FWDDECL
#include <Modloader/app/structs/CFNetwork_CFWebProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork_CFWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy_FWDDECL)
#include <Modloader/app/structs/CFNetwork_CFWebProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork_CFWebProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
