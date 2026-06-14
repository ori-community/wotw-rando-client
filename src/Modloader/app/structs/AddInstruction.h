#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_DEFINED)
#define IL2CPP_STRUCT_AddInstruction_DEFINED
struct AddInstruction__Class;
struct AddInstruction {
    struct AddInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AddInstruction_FWDDECL)
#define IL2CPP_STRUCT_AddInstruction_FWDDECL
#include <Modloader/app/structs/AddInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AddInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AddInstruction_FWDDECL)
#include <Modloader/app/structs/AddInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
