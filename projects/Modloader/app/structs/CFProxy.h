#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxy_DEFINED)
#include <Modloader/app/structs/CFProxy__Fields.h>
#if defined(IL2CPP_STRUCT_CFProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_CFProxy_DEFINED
struct CFProxy__Class;
struct CFProxy {
    struct CFProxy__Class* klass;
    MonitorData* monitor;
    struct CFProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFProxy_FWDDECL)
#define IL2CPP_STRUCT_CFProxy_FWDDECL
#include <Modloader/app/structs/CFProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_CFProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxy_DEFINED) && !defined(IL2CPP_STRUCT_CFProxy_FWDDECL)
#include <Modloader/app/structs/CFProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
