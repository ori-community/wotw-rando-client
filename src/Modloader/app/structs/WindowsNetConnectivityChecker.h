#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsNetConnectivityChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsNetConnectivityChecker_DEFINED)
#include <Modloader/app/structs/WindowsNetConnectivityChecker__Fields.h>
#if defined(IL2CPP_STRUCT_WindowsNetConnectivityChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsNetConnectivityChecker_DEFINED
struct WindowsNetConnectivityChecker__Class;
struct WindowsNetConnectivityChecker {
    struct WindowsNetConnectivityChecker__Class* klass;
    MonitorData* monitor;
    struct WindowsNetConnectivityChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsNetConnectivityChecker_FWDDECL)
#define IL2CPP_STRUCT_WindowsNetConnectivityChecker_FWDDECL
#include <Modloader/app/structs/WindowsNetConnectivityChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowsNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsNetConnectivityChecker_DEFINED) && !defined(IL2CPP_STRUCT_WindowsNetConnectivityChecker_FWDDECL)
#include <Modloader/app/structs/WindowsNetConnectivityChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsNetConnectivityChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
