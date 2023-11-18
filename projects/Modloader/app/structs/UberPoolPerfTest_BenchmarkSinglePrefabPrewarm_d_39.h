#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED) && defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_DEFINED
struct List_1_System_Int64__1;
struct UberPoolPerfTest_PrefabInfo;
struct UberPoolPerfTest;
struct Stopwatch;
struct CsvWriter;
struct UberPoolGroup;
struct Dictionary_2_System_Int32_UberPoolItem_;
struct UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct List_1_System_Int64__1* instantiationTimings;
    struct List_1_System_Int64__1* prewarmTimings;
    struct UberPoolPerfTest_PrefabInfo* info;
    struct UberPoolPerfTest* __4__this;
    struct Stopwatch* stopwatch;
    struct CsvWriter* outputWriter;
    bool _prefabWasActive_5__2;
    struct UberPoolGroup* _group_5__3;
    struct Dictionary_2_System_Int32_UberPoolItem_* _entries_5__4;
    struct TaskAwaiter __u__1;
    int32_t _i_5__5;
    struct YieldAwaitable_YieldAwaiter __u__2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_FWDDECL
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UberPoolItem_.h>
#include <Modloader/app/structs/List_1_System_Int64__1.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/UberPoolGroup.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
