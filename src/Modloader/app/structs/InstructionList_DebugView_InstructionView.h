#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_DEFINED)
#define IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_DEFINED
struct String;
struct Instruction;
struct InstructionList_DebugView_InstructionView {
    int32_t _index;
    int32_t _stackDepth;
    int32_t _continuationsDepth;
    struct String* _name;
    struct Instruction* _instruction;
};
#endif
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_FWDDECL)
#define IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_FWDDECL
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_DEFINED) && !defined(IL2CPP_STRUCT_InstructionList_DebugView_InstructionView_FWDDECL)
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
