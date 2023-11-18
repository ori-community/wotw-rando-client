#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_DEFINED
struct String;
struct SceneLoadingTest_Context;
struct SceneLoadingTest_Stats;
struct SceneLoadingTest_GatherStatsScope;
struct SceneLoadingTest_LoadAndUnloadScene_d_20 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct String* sceneName;
    struct SceneLoadingTest_Context* ctx;
    int32_t buildIndex;
    struct SceneLoadingTest_Stats* _loadStats_5__2;
    struct SceneLoadingTest_Stats* _unloadStats_5__3;
    struct TaskAwaiter __u__1;
    struct SceneLoadingTest_GatherStatsScope* __7__wrap3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_FWDDECL
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/SceneLoadingTest_GatherStatsScope.h>
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_LoadAndUnloadScene_d_20_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_LoadAndUnloadScene_d_20.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_LoadAndUnloadScene_d_20.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
