#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssignLocalInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssignLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction_DEFINED)
#include <Modloader/app/structs/AssignLocalInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_AssignLocalInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_AssignLocalInstruction_DEFINED
struct AssignLocalInstruction__Class;
struct AssignLocalInstruction {
    struct AssignLocalInstruction__Class* klass;
    MonitorData* monitor;
    struct AssignLocalInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction_FWDDECL)
#define IL2CPP_STRUCT_AssignLocalInstruction_FWDDECL
#include <Modloader/app/structs/AssignLocalInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AssignLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AssignLocalInstruction_FWDDECL)
#include <Modloader/app/structs/AssignLocalInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssignLocalInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
