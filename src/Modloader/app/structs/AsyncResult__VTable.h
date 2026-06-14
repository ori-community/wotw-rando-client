#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncResult__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncResult__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult__VTable_DEFINED)
#define IL2CPP_STRUCT_AsyncResult__VTable_DEFINED
struct AsyncResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
    VirtualInvokeData SyncProcessMessage;
    VirtualInvokeData AsyncProcessMessage;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
    VirtualInvokeData get_AsyncState_1;
    VirtualInvokeData get_AsyncWaitHandle_1;
    VirtualInvokeData get_CompletedSynchronously_1;
    VirtualInvokeData get_IsCompleted_1;
    VirtualInvokeData get_AsyncDelegate;
    VirtualInvokeData get_NextSink;
    VirtualInvokeData AsyncProcessMessage_1;
    VirtualInvokeData GetReplyMessage;
    VirtualInvokeData SetMessageCtrl;
    VirtualInvokeData SyncProcessMessage_1;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncResult__VTable_FWDDECL)
#define IL2CPP_STRUCT_AsyncResult__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AsyncResult__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AsyncResult__VTable_FWDDECL)
#include <Modloader/app/structs/AsyncResult__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncResult__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
