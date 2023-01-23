#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxNetConnectivityChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxNetConnectivityChecker_DEFINED)
#include <Modloader/app/structs/XboxNetConnectivityChecker__Fields.h>
#if defined(IL2CPP_STRUCT_XboxNetConnectivityChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxNetConnectivityChecker_DEFINED
struct XboxNetConnectivityChecker__Class;
struct XboxNetConnectivityChecker {
    struct XboxNetConnectivityChecker__Class* klass;
    MonitorData* monitor;
    struct XboxNetConnectivityChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxNetConnectivityChecker_FWDDECL)
#define IL2CPP_STRUCT_XboxNetConnectivityChecker_FWDDECL
#include <Modloader/app/structs/XboxNetConnectivityChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxNetConnectivityChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxNetConnectivityChecker_DEFINED) && !defined(IL2CPP_STRUCT_XboxNetConnectivityChecker_FWDDECL)
#include <Modloader/app/structs/XboxNetConnectivityChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxNetConnectivityChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
