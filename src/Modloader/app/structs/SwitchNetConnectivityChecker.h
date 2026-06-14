#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchNetConnectivityChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker_DEFINED)
#include <Modloader/app/structs/SwitchNetConnectivityChecker__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker_DEFINED
struct SwitchNetConnectivityChecker__Class;
struct SwitchNetConnectivityChecker {
    struct SwitchNetConnectivityChecker__Class* klass;
    MonitorData* monitor;
    struct SwitchNetConnectivityChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker_FWDDECL)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker_FWDDECL
#include <Modloader/app/structs/SwitchNetConnectivityChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker_DEFINED) && !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker_FWDDECL)
#include <Modloader/app/structs/SwitchNetConnectivityChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchNetConnectivityChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
