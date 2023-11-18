#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray_DEFINED)
#define IL2CPP_STRUCT_InstructionArray_DEFINED
struct Instruction__Array;
struct Object__Array;
struct RuntimeLabel__Array;
struct List_1_KeyValuePair_2_System_Int32_System_Object_;
struct InstructionArray {
    int32_t MaxStackDepth;
    int32_t MaxContinuationDepth;
    struct Instruction__Array* Instructions;
    struct Object__Array* Objects;
    struct RuntimeLabel__Array* Labels;
    struct List_1_KeyValuePair_2_System_Int32_System_Object_* DebugCookies;
};
#endif
#if !defined(IL2CPP_STRUCT_InstructionArray_FWDDECL)
#define IL2CPP_STRUCT_InstructionArray_FWDDECL
#include <Modloader/app/structs/Instruction__Array.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#endif
#undef IL2CPP_STRUCT_InstructionArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray_DEFINED) && !defined(IL2CPP_STRUCT_InstructionArray_FWDDECL)
#include <Modloader/app/structs/InstructionArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
