#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecrementInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecrementInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecrementInstruction_DEFINED)
#define IL2CPP_STRUCT_DecrementInstruction_DEFINED
struct DecrementInstruction__Class;
struct DecrementInstruction {
    struct DecrementInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DecrementInstruction_FWDDECL)
#define IL2CPP_STRUCT_DecrementInstruction_FWDDECL
#include <Modloader/app/structs/DecrementInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_DecrementInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecrementInstruction_DEFINED) && !defined(IL2CPP_STRUCT_DecrementInstruction_FWDDECL)
#include <Modloader/app/structs/DecrementInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecrementInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
