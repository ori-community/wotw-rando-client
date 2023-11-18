#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Boolean_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_System_Boolean__DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task__DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean__DEFINED)
#define IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_DEFINED
struct SemaphoreSlim_TaskNode;
struct CancellationTokenSource;
struct SemaphoreSlim;
struct Object;
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_Boolean_ __t__builder;
    struct CancellationToken cancellationToken;
    struct SemaphoreSlim_TaskNode* asyncWaiter;
    int32_t millisecondsTimeout;
    struct CancellationTokenSource* _cts_5__1;
    struct SemaphoreSlim* __4__this;
    struct Object* __7__wrap1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ __u__1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ __u__2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_FWDDECL
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/SemaphoreSlim_TaskNode.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31_FWDDECL)
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
