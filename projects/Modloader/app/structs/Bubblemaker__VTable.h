#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bubblemaker__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bubblemaker__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker__VTable_DEFINED)
#define IL2CPP_STRUCT_Bubblemaker__VTable_DEFINED
struct Bubblemaker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnRaceStart;
    VirtualInvokeData OnSyncRaceTimer;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnRestoreCheckpoint;
};
#endif
#if !defined(IL2CPP_STRUCT_Bubblemaker__VTable_FWDDECL)
#define IL2CPP_STRUCT_Bubblemaker__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Bubblemaker__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Bubblemaker__VTable_FWDDECL)
#include <Modloader/app/structs/Bubblemaker__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bubblemaker__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
