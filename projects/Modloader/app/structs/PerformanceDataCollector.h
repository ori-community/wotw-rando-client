#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceDataCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceDataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDataCollector_DEFINED)
#include <Modloader/app/structs/PerformanceDataCollector__Fields.h>
#if defined(IL2CPP_STRUCT_PerformanceDataCollector__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformanceDataCollector_DEFINED
struct PerformanceDataCollector__Class;
struct PerformanceDataCollector {
    struct PerformanceDataCollector__Class* klass;
    MonitorData* monitor;
    struct PerformanceDataCollector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceDataCollector_FWDDECL)
#define IL2CPP_STRUCT_PerformanceDataCollector_FWDDECL
#include <Modloader/app/structs/PerformanceDataCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformanceDataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDataCollector_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceDataCollector_FWDDECL)
#include <Modloader/app/structs/PerformanceDataCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceDataCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
