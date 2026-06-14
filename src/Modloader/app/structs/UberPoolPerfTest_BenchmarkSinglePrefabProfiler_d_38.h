#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED) && defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_DEFINED
struct IProfilingDataProvider;
struct UberPoolPerfTest;
struct List_1_UnityEngine_GameObject_;
struct Vector3__Array;
struct UberPoolPerfTest_PrefabInfo;
struct UberPoolPerfTest_c_DisplayClass38_0;
struct CsvWriter;
struct UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct IProfilingDataProvider* dataProvider;
    struct UberPoolPerfTest* __4__this;
    struct List_1_UnityEngine_GameObject_* instances;
    struct Vector3__Array* spawnPositions;
    struct UberPoolPerfTest_PrefabInfo* info;
    struct UberPoolPerfTest_c_DisplayClass38_0* __8__1;
    struct CsvWriter* outputWriter;
    float _timeoutTime_5__2;
    struct TaskAwaiter __u__1;
    struct YieldAwaitable_YieldAwaiter __u__2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_FWDDECL
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#include <Modloader/app/structs/UberPoolPerfTest_c_DisplayClass38_0.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
