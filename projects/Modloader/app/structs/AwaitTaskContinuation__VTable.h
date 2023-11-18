#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AwaitTaskContinuation__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AwaitTaskContinuation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__VTable_DEFINED)
#define IL2CPP_STRUCT_AwaitTaskContinuation__VTable_DEFINED
struct AwaitTaskContinuation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Run;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
    VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
};
#endif
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__VTable_FWDDECL)
#define IL2CPP_STRUCT_AwaitTaskContinuation__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AwaitTaskContinuation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AwaitTaskContinuation__VTable_FWDDECL)
#include <Modloader/app/structs/AwaitTaskContinuation__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AwaitTaskContinuation__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
