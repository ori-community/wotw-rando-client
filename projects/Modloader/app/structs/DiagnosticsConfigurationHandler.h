#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiagnosticsConfigurationHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiagnosticsConfigurationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiagnosticsConfigurationHandler_DEFINED)
#define IL2CPP_STRUCT_DiagnosticsConfigurationHandler_DEFINED
struct DiagnosticsConfigurationHandler__Class;
struct DiagnosticsConfigurationHandler {
    struct DiagnosticsConfigurationHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DiagnosticsConfigurationHandler_FWDDECL)
#define IL2CPP_STRUCT_DiagnosticsConfigurationHandler_FWDDECL
#include <Modloader/app/structs/DiagnosticsConfigurationHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DiagnosticsConfigurationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiagnosticsConfigurationHandler_DEFINED) && !defined(IL2CPP_STRUCT_DiagnosticsConfigurationHandler_FWDDECL)
#include <Modloader/app/structs/DiagnosticsConfigurationHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiagnosticsConfigurationHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
