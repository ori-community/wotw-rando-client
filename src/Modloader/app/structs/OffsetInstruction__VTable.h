#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetInstruction__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetInstruction__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetInstruction__VTable_DEFINED)
#define IL2CPP_STRUCT_OffsetInstruction__VTable_DEFINED
struct OffsetInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData ToDebugString;
    VirtualInvokeData __unknown_2;
};
#endif
#if !defined(IL2CPP_STRUCT_OffsetInstruction__VTable_FWDDECL)
#define IL2CPP_STRUCT_OffsetInstruction__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_OffsetInstruction__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetInstruction__VTable_DEFINED) && !defined(IL2CPP_STRUCT_OffsetInstruction__VTable_FWDDECL)
#include <Modloader/app/structs/OffsetInstruction__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetInstruction__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
