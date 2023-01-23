#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INetworkConnectivityChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INetworkConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker_DEFINED)
#define IL2CPP_STRUCT_INetworkConnectivityChecker_DEFINED
struct INetworkConnectivityChecker__Class;
struct INetworkConnectivityChecker {
    struct INetworkConnectivityChecker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker_FWDDECL)
#define IL2CPP_STRUCT_INetworkConnectivityChecker_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_INetworkConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker_DEFINED) && !defined(IL2CPP_STRUCT_INetworkConnectivityChecker_FWDDECL)
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
