#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssignLocalInstruction__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssignLocalInstruction__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction__VTable_DEFINED)
#define IL2CPP_STRUCT_AssignLocalInstruction__VTable_DEFINED
struct AssignLocalInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
    VirtualInvokeData BoxIfIndexMatches;
};
#endif
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction__VTable_FWDDECL)
#define IL2CPP_STRUCT_AssignLocalInstruction__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AssignLocalInstruction__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AssignLocalInstruction__VTable_FWDDECL)
#include <Modloader/app/structs/AssignLocalInstruction__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssignLocalInstruction__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
