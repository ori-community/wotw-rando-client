#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage_DEFINED)
#include <Modloader/app/structs/PerformanceDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage_DEFINED
struct PerformanceDebugMenuPage__Class;
struct PerformanceDebugMenuPage {
    struct PerformanceDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct PerformanceDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage_FWDDECL
#include <Modloader/app/structs/PerformanceDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformanceDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/PerformanceDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
