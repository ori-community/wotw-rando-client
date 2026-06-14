#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IncrementInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IncrementInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IncrementInstruction_DEFINED)
#define IL2CPP_STRUCT_IncrementInstruction_DEFINED
struct IncrementInstruction__Class;
struct IncrementInstruction {
    struct IncrementInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IncrementInstruction_FWDDECL)
#define IL2CPP_STRUCT_IncrementInstruction_FWDDECL
#include <Modloader/app/structs/IncrementInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_IncrementInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IncrementInstruction_DEFINED) && !defined(IL2CPP_STRUCT_IncrementInstruction_FWDDECL)
#include <Modloader/app/structs/IncrementInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IncrementInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
