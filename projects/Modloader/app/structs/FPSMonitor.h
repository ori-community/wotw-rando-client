#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor_DEFINED)
#include <Modloader/app/structs/FPSMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_FPSMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSMonitor_DEFINED
struct FPSMonitor__Class;
struct FPSMonitor {
    struct FPSMonitor__Class* klass;
    MonitorData* monitor;
    struct FPSMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSMonitor_FWDDECL)
#define IL2CPP_STRUCT_FPSMonitor_FWDDECL
#include <Modloader/app/structs/FPSMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor_DEFINED) && !defined(IL2CPP_STRUCT_FPSMonitor_FWDDECL)
#include <Modloader/app/structs/FPSMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
