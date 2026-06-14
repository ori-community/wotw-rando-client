#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Instruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Instruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Instruction_DEFINED)
#define IL2CPP_STRUCT_Instruction_DEFINED
struct Instruction__Class;
struct Instruction {
    struct Instruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Instruction_FWDDECL)
#define IL2CPP_STRUCT_Instruction_FWDDECL
#include <Modloader/app/structs/Instruction__Class.h>
#endif
#undef IL2CPP_STRUCT_Instruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Instruction_DEFINED) && !defined(IL2CPP_STRUCT_Instruction_FWDDECL)
#include <Modloader/app/structs/Instruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Instruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
