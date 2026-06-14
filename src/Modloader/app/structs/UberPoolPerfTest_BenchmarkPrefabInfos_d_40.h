#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_DEFINED
struct UberPoolPerfTest;
struct List_1_UberPoolPerfTest_PrefabInfo_;
struct UberPoolPerfTest_LogCatcher;
struct CsvWriter;
struct List_1_UnityEngine_GameObject_;
struct List_1_System_Int64__1;
struct Vector3__Array;
struct IProfilingDataProvider;
struct Stopwatch;
struct UberPoolPerfTest_BenchmarkPrefabInfos_d_40 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct UberPoolPerfTest* __4__this;
    struct Vector3 position;
    struct List_1_UberPoolPerfTest_PrefabInfo_* prefabInfos;
    struct UberPoolPerfTest_LogCatcher* logCatcher;
    struct CsvWriter* outputWriter;
    struct List_1_UnityEngine_GameObject_* _instances_5__2;
    struct List_1_System_Int64__1* _timingsBuffer1_5__3;
    struct List_1_System_Int64__1* _timingsBuffer2_5__4;
    struct Vector3__Array* _spawnPositions_5__5;
    struct IProfilingDataProvider* _dataProvider_5__6;
    struct Stopwatch* _stopwatch_5__7;
    int32_t _iPrefab_5__8;
    struct TaskAwaiter __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_FWDDECL
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_System_Int64__1.h>
#include <Modloader/app/structs/List_1_UberPoolPerfTest_PrefabInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkPrefabInfos_d_40_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
