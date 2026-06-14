#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_DEFINED
struct String;
struct SceneLoadingTest_Context;
struct SceneLoadingTest_Execute_d_19 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CancellationToken cancellationToken;
    bool _wasAllowLoadFromSceneStreaming_5__2;
    struct String* _inProgressPath_5__3;
    struct TaskAwaiter __u__1;
    struct SceneLoadingTest_Context* _ctx_5__4;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_FWDDECL
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_Execute_d_19_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
