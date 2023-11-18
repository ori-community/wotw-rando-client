#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetConnectivityCheckerFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetConnectivityCheckerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetConnectivityCheckerFactory_DEFINED)
#define IL2CPP_STRUCT_NetConnectivityCheckerFactory_DEFINED
struct NetConnectivityCheckerFactory__Class;
struct NetConnectivityCheckerFactory {
    struct NetConnectivityCheckerFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NetConnectivityCheckerFactory_FWDDECL)
#define IL2CPP_STRUCT_NetConnectivityCheckerFactory_FWDDECL
#include <Modloader/app/structs/NetConnectivityCheckerFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_NetConnectivityCheckerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetConnectivityCheckerFactory_DEFINED) && !defined(IL2CPP_STRUCT_NetConnectivityCheckerFactory_FWDDECL)
#include <Modloader/app/structs/NetConnectivityCheckerFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetConnectivityCheckerFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
