#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerfTestTimer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerfTestTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_PerfTestTimer__Fields_DEFINED
struct PerfTestTimer_TestData;
struct Stopwatch;
struct __declspec(align(8)) PerfTestTimer__Fields {
    struct PerfTestTimer_TestData* Data;
    struct Stopwatch* TestStopwatch;
    struct Stopwatch* GcStopwatch;
    bool TakeGCUnloadTimings;
    int32_t TotalIterationToDo;
    int32_t TestIterations;
    int64_t TotalGCChange;
};
#endif
#if !defined(IL2CPP_STRUCT_PerfTestTimer__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerfTestTimer__Fields_FWDDECL
#include <Modloader/app/structs/PerfTestTimer_TestData.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_PerfTestTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerfTestTimer__Fields_FWDDECL)
#include <Modloader/app/structs/PerfTestTimer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerfTestTimer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
