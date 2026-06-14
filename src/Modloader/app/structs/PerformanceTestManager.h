#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceTestManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceTestManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceTestManager_DEFINED)
#include <Modloader/app/structs/PerformanceTestManager__Fields.h>
#if defined(IL2CPP_STRUCT_PerformanceTestManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformanceTestManager_DEFINED
struct PerformanceTestManager__Class;
struct PerformanceTestManager {
    struct PerformanceTestManager__Class* klass;
    MonitorData* monitor;
    struct PerformanceTestManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceTestManager_FWDDECL)
#define IL2CPP_STRUCT_PerformanceTestManager_FWDDECL
#include <Modloader/app/structs/PerformanceTestManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformanceTestManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceTestManager_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceTestManager_FWDDECL)
#include <Modloader/app/structs/PerformanceTestManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceTestManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
