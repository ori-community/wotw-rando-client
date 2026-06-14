#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPrewarmOperation__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPrewarmOperation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmOperation__VTable_DEFINED)
#define IL2CPP_STRUCT_IPrewarmOperation__VTable_DEFINED
struct IPrewarmOperation__VTable {
    VirtualInvokeData get_OperationType;
    VirtualInvokeData get_OperationSlot;
    VirtualInvokeData get_PrewarmOperationOrder;
    VirtualInvokeData get_ShouldExecute;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_IsDone;
    VirtualInvokeData get_HasBegun;
    VirtualInvokeData get_PercentDone;
    VirtualInvokeData get_TimeElapsed;
    VirtualInvokeData Begin;
    VirtualInvokeData Update;
    VirtualInvokeData FinishImmediately;
    VirtualInvokeData DebugDrawStatus;
};
#endif
#if !defined(IL2CPP_STRUCT_IPrewarmOperation__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPrewarmOperation__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPrewarmOperation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmOperation__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPrewarmOperation__VTable_FWDDECL)
#include <Modloader/app/structs/IPrewarmOperation__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPrewarmOperation__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
