#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerfTestResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerfTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestResult_DEFINED)
#include <Modloader/app/structs/PerfTestResult__Fields.h>
#if defined(IL2CPP_STRUCT_PerfTestResult__Fields_DEFINED)
#define IL2CPP_STRUCT_PerfTestResult_DEFINED
struct PerfTestResult__Class;
struct PerfTestResult {
    struct PerfTestResult__Class* klass;
    MonitorData* monitor;
    struct PerfTestResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerfTestResult_FWDDECL)
#define IL2CPP_STRUCT_PerfTestResult_FWDDECL
#include <Modloader/app/structs/PerfTestResult__Class.h>
#endif
#undef IL2CPP_STRUCT_PerfTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestResult_DEFINED) && !defined(IL2CPP_STRUCT_PerfTestResult_FWDDECL)
#include <Modloader/app/structs/PerfTestResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerfTestResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
