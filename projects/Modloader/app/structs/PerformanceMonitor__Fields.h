#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceMonitor__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_PerformanceMonitor__Fields_DEFINED
struct FPSMonitor;
struct FPSTestResult;
struct FPSSampleData;
struct List_1_FPSTestResult_;
struct PerformanceMonitor__Fields {
    struct MonoBehaviour__Fields _;
    struct FPSMonitor* FPSMonitor;
    struct FPSTestResult* m_fpsTestResult;
    struct FPSSampleData* m_fpsSampleData;
    struct DateTime m_testTime;
    float m_performanceDipTimeout;
    struct List_1_FPSTestResult_* TestResults;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerformanceMonitor__Fields_FWDDECL
#include <Modloader/app/structs/FPSMonitor.h>
#include <Modloader/app/structs/FPSSampleData.h>
#include <Modloader/app/structs/FPSTestResult.h>
#include <Modloader/app/structs/List_1_FPSTestResult_.h>
#endif
#undef IL2CPP_STRUCT_PerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/PerformanceMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
