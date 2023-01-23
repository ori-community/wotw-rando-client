#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_WhenAllPromise__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_WhenAllPromise__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__VTable_DEFINED)
#define IL2CPP_STRUCT_Task_WhenAllPromise__VTable_DEFINED
struct Task_WhenAllPromise__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData ShouldReplicate;
    VirtualInvokeData CreateReplicaTask;
    VirtualInvokeData get_SavedStateForNextReplica;
    VirtualInvokeData set_SavedStateFromPreviousReplica;
    VirtualInvokeData get_HandedOverChildReplica;
    VirtualInvokeData set_HandedOverChildReplica;
    VirtualInvokeData InnerInvoke;
    VirtualInvokeData Invoke;
};
#endif
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__VTable_FWDDECL)
#define IL2CPP_STRUCT_Task_WhenAllPromise__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Task_WhenAllPromise__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Task_WhenAllPromise__VTable_FWDDECL)
#include <Modloader/app/structs/Task_WhenAllPromise__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_WhenAllPromise__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
