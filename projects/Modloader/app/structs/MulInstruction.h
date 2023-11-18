#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MulInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MulInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulInstruction_DEFINED)
#define IL2CPP_STRUCT_MulInstruction_DEFINED
struct MulInstruction__Class;
struct MulInstruction {
    struct MulInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MulInstruction_FWDDECL)
#define IL2CPP_STRUCT_MulInstruction_FWDDECL
#include <Modloader/app/structs/MulInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_MulInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulInstruction_DEFINED) && !defined(IL2CPP_STRUCT_MulInstruction_FWDDECL)
#include <Modloader/app/structs/MulInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MulInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
