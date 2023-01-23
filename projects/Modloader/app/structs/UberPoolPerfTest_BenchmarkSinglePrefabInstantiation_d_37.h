#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED) && defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_DEFINED
struct UberPoolPerfTest_PrefabInfo;
struct UberPoolPerfTest;
struct List_1_UnityEngine_GameObject_;
struct Stopwatch;
struct List_1_System_Int64__1;
struct CsvWriter;
struct UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct UberPoolPerfTest_PrefabInfo* info;
    struct UberPoolPerfTest* __4__this;
    struct List_1_UnityEngine_GameObject_* instances;
    struct Stopwatch* stopwatch;
    struct Vector3 position;
    struct List_1_System_Int64__1* instantiateTimings;
    struct List_1_System_Int64__1* destructionTimings;
    struct CsvWriter* outputWriter;
    int32_t _iterationCount_5__2;
    struct TaskAwaiter __u__1;
    struct YieldAwaitable_YieldAwaiter __u__2;
    int32_t _iteration_5__3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_FWDDECL
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/List_1_System_Int64__1.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
