#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceCountersElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceCountersElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceCountersElement_DEFINED)
#define IL2CPP_STRUCT_PerformanceCountersElement_DEFINED
struct PerformanceCountersElement__Class;
struct PerformanceCountersElement {
    struct PerformanceCountersElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PerformanceCountersElement_FWDDECL)
#define IL2CPP_STRUCT_PerformanceCountersElement_FWDDECL
#include <Modloader/app/structs/PerformanceCountersElement__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformanceCountersElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceCountersElement_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceCountersElement_FWDDECL)
#include <Modloader/app/structs/PerformanceCountersElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceCountersElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
