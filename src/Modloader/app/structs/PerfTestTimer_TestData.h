#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerfTestTimer_TestData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerfTestTimer_TestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData_DEFINED)
#include <Modloader/app/structs/PerfTestTimer_TestData__Fields.h>
#if defined(IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_DEFINED)
#define IL2CPP_STRUCT_PerfTestTimer_TestData_DEFINED
struct PerfTestTimer_TestData__Class;
struct PerfTestTimer_TestData {
    struct PerfTestTimer_TestData__Class* klass;
    MonitorData* monitor;
    struct PerfTestTimer_TestData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData_FWDDECL)
#define IL2CPP_STRUCT_PerfTestTimer_TestData_FWDDECL
#include <Modloader/app/structs/PerfTestTimer_TestData__Class.h>
#endif
#undef IL2CPP_STRUCT_PerfTestTimer_TestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData_DEFINED) && !defined(IL2CPP_STRUCT_PerfTestTimer_TestData_FWDDECL)
#include <Modloader/app/structs/PerfTestTimer_TestData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerfTestTimer_TestData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
